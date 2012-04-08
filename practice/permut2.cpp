#include<iostream>
#include<cstdio>
int main()
{
    long int n,i,j;
    bool ans;
    scanf("%ld", &n);
    while(n)
    {
        ans=true;
        i=0;
        long int * a = new long int [n];
        while(n--)
        {
            scanf("%ld",&a[i]);
            i++;
        }
        j=0;
        while(ans && j<i)
        {
            if(a[a[j]-1]!=(j+1))
                ans=false;
            else
                j++;
        }
        if(ans)
            printf("ambiguous \n");
        else
            printf("not ambiguous \n");
        scanf("%ld", &n);
    }
    system("pause");
    return 0;
}
