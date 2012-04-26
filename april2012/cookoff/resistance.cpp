#include<iostream>
#include<stdio.h>

using namespace std;

typedef unsigned long long int LL;

void func(LL &, LL &, LL );

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        LL n,m;
        scanf("%llu", &n); scanf("%llu", &m);
        LL x=1,y=1;
        for(LL i=1;i<n;i++)
        {
            func(x,y,m);
        }    
        printf("%llu/%llu\n",x,y);   
    }
    return 0;
}

void func(LL &x, LL &y, LL m)
{
    x=(x+y)%m;
    y=(x+y)%m;
}
