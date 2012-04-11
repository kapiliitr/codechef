/*
 * This is not an ideal Solution to the problem. It did not solve all the test cases and much betteer solutions are available.
*/
#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,i,j;
        scanf("%d",&n);
        int x[100][100];
        int y[100][100];
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
                scanf("%d",&x[i][j]);  
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
                scanf("%d",&y[i][j]);  
        }
        for(i=1;i<n;i++)
        {
            printf("%d ",i);
        }
        printf("%d\n",i);
        //I am going to print every third number and so on. eg. if n=5, then I print 1 4 2 5 3
        for(i=1;i<=n;i+=3)
        {
            printf("%d ",i);
        }
        for(j=2;j<=n;j+=3)
        {
            printf("%d ",j);
        }
        for(i=3;i<n-2;i+=3)
        { 
            printf("%d ",i);
        }
        printf("%d\n",i);
    }
    return 0;
}

