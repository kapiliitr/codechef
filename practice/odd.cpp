#include<stdio.h>
int main()
{
    int t,n,a,b;
    scanf("%d",&t);
    while(t--)
    {
        a=0;
        b=1;
        scanf("%d",&n);
        while(b<n)
        {
            a=b;
            b*=2;
        }
        printf("%d \n",a);
    }
    return 0;
}
