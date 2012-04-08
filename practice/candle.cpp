#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    long int t,a[10],i,min,loc;
    scanf("%ld",&t);
    while(t--)
    {
        min=9;
        for(i=0;i<10;i++)
        {
            scanf("%ld",&a[i]);
            if(a[i]<min)
            {
                min=a[i];
                loc=i;
            }
            else if(a[i]==min && !loc )
                loc=i;       
        }
        if(!loc)
            printf("1");
        for(i=0;i<=min;i++)
            printf("%ld",loc);
        printf("\n");
    }
    system("pause");
    return 0;
}
