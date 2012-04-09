#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int t;
    char s[11];
    scanf("%d",&t);
    cin.getline(s,11);
    while(t--)
    {   
        cin.getline(s,11);
        if(s[0]<97 || s[0]>104)
        {
            printf("Error\n");
        }
        else if(s[1]<49 || s[1]>56)
        {
            printf("Error\n");
        }
        else if(s[2]!='-')
        {
            printf("Error\n");
        }
        else if(s[3]<97 || s[3]>104)
        {
            printf("Error\n");
        }
        else if(s[4]<49 || s[4]>56)
        {
            printf("Error\n");
        }
        else if(s[5]!='\0')
        {
            printf("Error\n");
        }
        else
        {
            if(((abs(s[3]-s[0])==2)&&(abs(s[4]-s[1])==1))||((abs(s[3]-s[0])==1)&&(abs(s[4]-s[1])==2)))
            {
                printf("Yes\n");
            }
            else
            {
                printf("No\n");
            }
        }
    }
    return 0;
}
