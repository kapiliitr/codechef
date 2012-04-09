#include<stdio.h>
int main()
{
    int a,b,c,d=0;
    scanf("%d %d",&a,&b);
    while(a--)
    {
        scanf("%d",&c);
        if(c%b==0)
            d++;
    }
    printf("%d \n",d);
    return 0;
} 
