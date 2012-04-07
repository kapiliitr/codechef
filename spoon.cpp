#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int r,c;
        scanf("%d %d",&r,&c);
        char ** ci = new char * [r];
        for(int x=0;x<r;x++)
        {
            ci[x] = new char [c+1];
        }
        for(int z=0;z<r;z++)
        {
            for(int y=0;y<c+1;y++)
            {
                char ch;
                scanf("%c",&ch);
                ch=tolower(ch);
                ci[z][y]=ch;
            }
        }
        int found=0;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<=(c-4);j++)
            {
                if(ci[i][j]=='s' && ci[i][j+1]=='p' && ci[i][j+2]=='o' && ci[i][j+3]=='o' && ci[i][j+4]=='n')
                {
                    found=1;
                    break;
                }
            }
            if(found!=1 && i>=4)
            {
                for(int j=0;j<c+1;j++)
                {
                    if(ci[i-4][j]=='s' && ci[i-3][j]=='p' && ci[i-2][j]=='o' && ci[i-1][j]=='o' && ci[i][j]=='n')
                    {
                        found=1;
                        break;
                    }                                   
                }
                if(found==1)  break;
            }
            if(found==1)  break;
        }
        if(found==1) {printf("There is a spoon!\n");}
        else  {printf("There is indeed no spoon!\n");}
    }

    return 0;
}

