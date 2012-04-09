#include<iostream>
#include<cmath>
#include<cstdio>
int main()
{
    int t,total,m,w,c,temp;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d %d %d",&total,&m,&w,&c);
        //        max women that can be saved
        temp=m*2;
        w=(temp>=w)?w:temp;
        //max children that can be saved
        temp=(m+w)*4;
        c=(temp>=c)?c:temp;
        temp=total*4/5;
        c=(temp>=c)?c:temp;
        temp=(total-c)*2/3;
        w=(temp>=w)?w:temp;
        temp=total-c-w;
        m=(temp>=m)?m:temp;
        printf("%d %d %d \n",m,w,c);
    }
    system("pause");
    return 0;
}
