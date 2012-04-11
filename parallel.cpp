#include<iostream>
#include<stdio.h>
#include<cstdio>

using namespace std;

int steps=0;

void retsteps(int a[], int m, int n)
{
    if((n/2)>0 && m!=n && m>0)
    {
        int t = ((n-m+1)%2==0) ? (n-m+1) : (n-m);
        if((t/2)>0)
        {
            int * b = new int [(t/2)+1];
            int j=1;
            steps++;
            for(int i=m;i<n;i+=2)
            {
                b[j] = a[i+1];
                j++;
            }
            retsteps(b,m,j-1);
            if(((n-1)/2)>0)
            {
                steps++;
            }
        }
    }
}

void rec(int a[], int m, int n)
{
    if((n/2)>0 && m!=n && m>0)
    {
        int t = ((n-m+1)%2==0) ? (n-m+1) : (n-m);
        if((t/2)>0)
        {
            int * b = new int [(t/2)+1];
            int j=1;
            printf("%d ",(t/2));
            for(int i=m;i<n;i+=2)
            {
                printf("%d+%d=%d ",a[i],a[i+1],a[i+1]);
                b[j] = a[i+1];
                j++;
            }
            printf("\n");
            rec(b,m,j-1);
            if(((n-1)/2)>0)
            {
                printf("%d ",(n-1)/2);
                for(int i=2;i<n;i+=2)
                {
                    printf("%d+%d=%d ",a[i],a[i+1],a[i+1]);
                }
                printf("\n");
            }
        }

    }
}

int main()
{
    int n;
    scanf("%d",&n);
    int * arr = new int [n+1];
    for(int i=0;i<=n;i++) arr[i]=i;
    retsteps(arr,1,n);
    if(n>1)printf("%d\n",steps);
    rec(arr,1,n); 
    return 0;
}

