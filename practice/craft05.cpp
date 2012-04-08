#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int found,t,n,x,y,z,i,j,amt,nail,temp;
    scanf("%d",&t);
    while(t--)
    {
        found=0;
        cin>>n>>x>>y>>z;
        temp=(1000*x)+(100*y)+(10*z);
        for(i=9;i>0;i--)
        {
            for(j=9;j>=0;j--)
            {
                amt=(i*10000)+temp+j;
                if(amt%n==0)
                {
                    found=1;
                    printf("%d %d %d \n",i,j,amt/n);
                    break;
                }
            }
            if(found)
                break;
        }
        if(!found)
        {
            printf("0 \n");
        }
    }; 
    system("pause");
    return 0;
}
