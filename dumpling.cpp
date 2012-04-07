#include<iostream>
#include<stdio.h>
#include<cstdlib>
#include<stdint.h>

using namespace std;

typedef unsigned long long int LL;

LL gcd(LL x, LL y)
{
    if(y==0)
        return x;
    else
        return gcd(y,x%y);
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        LL a,b,c,d,k;
        LL gcd1,gcd2,gcd3,lcm,ans=1;
        scanf("%llu",&a);
        scanf("%llu",&b);
        scanf("%llu",&c);
        scanf("%llu",&d);
        scanf("%llu",&k);
        gcd1=gcd(a,b); 
        gcd2=gcd(c,d);
        gcd3=gcd(gcd1,gcd2);

        //calculate MSB bit position = no of bits in each gcd
        unsigned int r1=1,r2=1,r3=1;
        LL t1=gcd1,t2=gcd2,t3=gcd3;
        if(t1!=1) { while(t1 >>= 1) { r1++;  } }
        if(t2!=1) { while(t2 >>= 1) { r2++;  } }
        if(t3!=1) { while(t3 >>= 1) { r3++;  } }

        if(r1+r2-r3<=60) //log2(10^18)=59.xxxxx
        {
            lcm=(gcd1/gcd3)*(gcd2/gcd3)*gcd3;
            ans+=2*(k/lcm); 
        }       
        printf("%llu\n",ans);   
    }
    return 0;
}

