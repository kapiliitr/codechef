#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int cases=100;
    while(cases--)
    {
        int i=0,j,flag,len;
        long long int ans=0;
        char str[100];
        char bin[100];
        while(1)
        {
            scanf("%s",str);
            len=strlen(str);
            if(str[0]=='~')
                exit(1);
            else if(str[0]=='#')
                break;
            else if(len==1)
                flag=1;
            else if(len==2)
                flag=0;
            else
            {
                for(j=1;j<=len-2;j++)
                    bin[i++]=flag;
            } 
        }
        for(j=0;j<i;j++)
            ans=(ans*2)+bin[j];
        printf("%lld \n",ans);
    }
    return 0;
}
