#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);        
        int temp=n;
        int f=-1;
        while(temp>=0 && f==-1)
        {
            if(temp%7==0)
            {
                f=temp;          
            }
            else
            {
                temp-=4;
            }
        }
        printf("%d\n",f);
    }
    return 0;
}

