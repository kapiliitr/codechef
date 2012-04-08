#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int t,ans,i;
    char str[80];
    scanf("%d",&t);
    while(t--)
    {
        ans=0,i=0;
        scanf("%s",&str);
        while(str[i]!='\0')
        {
            ans+=(int)str[i];
            i++;
        }
        printf("%c \n",char(ans/i));
    }
    system("pause");
    return 0;
}
