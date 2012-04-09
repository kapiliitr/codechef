#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,c,count=0,ans=0,max;
        scanf("%d %d %d",&a,&b,&c);
        max=(a*100)+b;
        while((a>0 || b>=c)&& count<=1000)
        {
            if(b<c)
            {
                b+=100;
                a--;
            }
            b-=c;
            int temp=b;
            b=a;
            a=temp;
            count++;
            if(max<((100*a)+b))
            {
                max=(100*a)+b;
                ans=count;
            }
        }
        printf("%d \n",ans);        
    }
    return 0;
}
