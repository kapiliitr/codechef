#include<iostream>
#include<stdio.h>

using namespace std;

#define si(t) scanf("%d",&t)
#define loop(i,n) for(i=0;i<n;i++)
#define loopi(i,n) for(i=n-1;i>=0;i--)
#define p(s) printf("%llu\n",s)

typedef unsigned long long int LL;

int main()
{
    int t,n,m;
    LL c;

    si(t);
    while(t--)
    {
        c=0;  //count=0
        si(n); //scan n
        si(m); //scan m

        if((2*n -1)>=m)
        {
            if(n<m)
            {
                c+=(n-(m/2));
            }
            else
            {
                LL u = n%m;
                LL v = n - u;

                LL temp1 = v/m + 1;
                LL temp2 = v/m;

                if(u!=0 && u>((m)/2))
                {
                    c+=((temp1*temp1)*(u-(m/2)));
                    c+=((temp1*temp2)*(m-1-u));
                }
                else if(u!=0 && u<((m)/2) && m%2==0)
                {
                    c+=((temp1*temp2)*(u));
                    c+=((temp2*temp2)*((m/2)-1-u));
                }
                else if(u!=0 && u<((m)/2) && m%2!=0)
                {
                    c+=((temp1*temp2)*(u));
                    c+=((temp2*temp2)*((m/2)-u));
                }
                else
                {
                    c+=(temp2*temp2)*(((m+1)/2)-1);
                }

                if(m%2==0)
                {
                    if(u!=0 && u>(m/2))
                    {
                        c+=((temp1*(temp1-1))/2);
                    }
                    else
                    {
                        c+=((temp2*(temp2-1))/2);
                    }
                }

                if(n>=m)
                {
                    c+=((temp2*(temp2-1))/2); 
                }
            }
        }
        p(c);
    } 
    return 0;
}
