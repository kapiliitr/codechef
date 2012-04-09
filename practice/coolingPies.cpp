#include<iostream>
#include<cstdio>
using namespace std;
void sort(int [], int);
int main()
{
    int t,n,i,j,count;
    int * c, *r;
    scanf("%d",&t);
    while(t--)
    {
        count=0;
        scanf("%d",&n);
        c= new int [n];
        r= new int [n];
        for(i=0;i<n;i++)
            scanf("%d",&c[i]);
        sort(c,n);
        for(i=0;i<n;i++)
            scanf("%d",&r[i]);   
        for(i=0;i<n;i++)           
            sort(r,n);
        for(i=0,j=0;j<n;j++)
        {
            if(c[i]<=r[j])
            {
                i++;
                count++;
            }
        }
        printf("%d \n",count);
    }
    system("pause");
    return 0;
}
void sort(int a[], int s)
{
    for(int i=0;i<s-1;i++)
    {
        for(int j=0;j<s-i-1;j++)
        {
            if(a[j]>a[j+1])
                swap(a[j],a[j+1]);
        }
    }
}

