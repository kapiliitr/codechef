#include<stdio.h>
int min(int a, int b)
{
    return (a>=b)?b:a;
}
int main()
{
    int t,n,a,b,c,i,j,k;
    long long int count;
    scanf("%d",&t);
    while(t--)
    {
        count=0;
        scanf("%d %d %d %d",&n,&a,&b,&c);
        for(i=0;i<=a && i<=n;i++)
        {
            for(j=0;j<=b && j<=(n-i);j++)
            {
                count+=1+min(c,n-i-j);
            }
        }
        printf("%lld \n",count);
    }
    return 0;
}
