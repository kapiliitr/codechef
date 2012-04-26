#include<iostream>
#include<stdio.h>

int fact(int);

using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a[101];
        for(int i=0;i<101;i++)
            a[i]=0;
        for(int i=0;i<11;i++)
        {
            int temp;
            scanf("%d",&temp);
            a[temp]++;
        }
        int num;
        scanf("%d",&num);
        int ans=1,count=0;
        for(int i=100;i>=0;i--)
        {
            if(a[i]!=0 && count!=num)
            {
                if((a[i]+count)>num)
                {
                    ans*=fact(a[i])/(fact(num-count)*fact(a[i]-num+count));    
                    count=num;
                }
                else
                {
                    count+=a[i];
                }
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}

int fact(int a)
{
    int b=1;
    for(int i=2;i<=a;i++)
    {
        b*=i;   
    }
    return b;
}
