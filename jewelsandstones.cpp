#include<iostream>
#include<stdio.h>
#include<cstring>

using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char j[101];
        char s[101];
        int ascii[128];
        for(int i=0;i<128;i++)
            ascii[i]=0;
        scanf("%s",j);
        int len=strlen(j);
        for(int i=0;i<len;i++)
        {
            ascii[(int)j[i]]++;
        }
        scanf("%s",s);
        len=strlen(s);
        int count=0;
        for(int i=0;i<len;i++)
        {
            if(ascii[(int)s[i]]>0)
                count++;
        }
        printf("%d\n",count);
    }
    return 0;
}
