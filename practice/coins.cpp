#include<stdio.h>
const int t=100000;
int count;
unsigned int arr[1000000];
unsigned int max(int a)
{
    if(a<count)
        return arr[a];
    else if(a<t)
    {
        int i;
        for(i=count;i<=a;i++)
        {
            arr[i]=arr[i/2]+arr[i/3]+arr[i/4];
        }
        count=i;
        return arr[a];
    }
    else
    {
        return max(a/2)+max(a/3)+max(a/4);
    }
}
int main()
{
    int n,i;
    count=12;
    for(i=0;i<count;i++)
        arr[i]=i;
    while(scanf("%d",&n)!=EOF)
    {
        printf("%u \n",max(n));
    }
    return 0;
}
