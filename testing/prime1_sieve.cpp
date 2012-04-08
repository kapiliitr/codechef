#include<iostream>
#include<stdio.h>

using namespace std;

#define NUM 1000000001

int main()
{   
    int t,a,b,i,temp,f,j;
    bool arr[NUM];
    for(i=0; i<NUM;i++)
    {
        arr[i] = true;        
    }

    arr[1] = false;

    for(i=2;i<NUM;i++)
    {
        if(arr[i]) //prime
        {
            j=2;
            while(j*i<NUM)
            {
                arr[j*i] = false;
                j++;
            }
        }
    }

    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&a,&b);
        for(i=a;i<=b;i++)
        {
            if(arr[i])
                printf("%d\n",i);
        }
    }
    return 0;
}


