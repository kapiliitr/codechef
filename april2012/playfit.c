#include<stdio.h>

int maxDiff(int arr[], int arr_size)
{
    int max_diff = arr[1] - arr[0];
    int min_element = arr[0];
    int i;
    for(i = 1; i < arr_size; i++)
    {
        if(arr[i] - min_element > max_diff)
            max_diff = arr[i] - min_element;
        if(arr[i] < min_element)
            min_element = arr[i];
    }
    return max_diff;
}    

int main()
{
    int t, n, ans;
    int g[100000];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        int i;
        for(i=0;i<n;i++) { g[i]=0; }
        for(i=0;i<n;i++) { scanf("%d",&g[i]); }
        if(n>=2)
        {
            ans = maxDiff(g, n);
            if(ans>0) printf("%d\n",ans);
            else { printf("UNFIT\n"); }        
        }
        else { printf("UNFIT\n"); }        
    }
    return 0;
} 

