#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int t,n,maxsum,temp,minnum,sum,found=0;
    scanf("%d",&t);
    while(t--)
    {
        maxsum=0;
        found=0;
        scanf("%d",&n);
        temp=n;
        while(temp>9)
        {
            maxsum+=9;
            temp/=10;
        }
        maxsum+=temp-1;
        minnum=n-maxsum;
        while(minnum<n)
        {
            sum=minnum;
            temp=minnum;
            while(temp>0)
            {
                sum+=(temp%10);
                temp/=10;
            }
            if(sum==n)
            {
                found=1;
                printf("%d \n",minnum);
                break;
            }
            else
                minnum++;
        }
        if(!found)
            printf("NONE \n");
    }
    system("pause");
    return 0;
}

