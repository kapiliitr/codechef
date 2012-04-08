#include<stdio.h>
#include<iostream>

using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        int b[10001];
        for(int i=0;i<10001;i++)
        {    b[i]=0;    }
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
            int x;
            scanf("%d",&x);
            b[x]++;
        }
        int max=b[1],num=1;
        for(int i=2;i<10001;i++)
        {   
            if(b[i]>max)
            {
                max=b[i];
                num=i;
            }
        }
        printf("%d %d\n",num,max);
    }

    return 0;
}
