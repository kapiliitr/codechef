#include<iostream>
#include<stdio.h>

using namespace std;

typedef unsigned long long int LL;
#define s(i) scanf("%llu",&i) 
#define p(i) printf("%llu\n",i) 
#define MOD 1000000007
#define f(i,p,j) for(i=p;i<j;i++)

int main()
{
    LL d[1000][1000];
    LL i,j;
    f(i,0,1000)f(j,0,1000)d[i][j]=0;
    LL ans[1000];
    f(i,0,1000)ans[i]=0;
    f(i,0,1000)
    {
        f(j,0,i+1)
        {
            if(i==0 || j==0 || i==j) d[i][j]=1;
            else d[i][j]=(d[i-1][j]*(j+1))%MOD+d[i-1][j-1]%MOD;
            ans[i]= (ans[i]+d[i][j])%MOD;
        }
    }
    LL t;
    s(t);
    while(t--)
    {
        LL n;
        s(n);
        p(ans[n-1]);
    }
    return 0;
}

