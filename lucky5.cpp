#include<stdio.h>
#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int count4=0, count7=0,other=0;
        string str;
        cin>>str;
        int len=str.length();
        int replace=0,add=0;
        for(int i=0;i<len;i++)
        {
            if((int)str[i]==52)
            {      count4++;}
            else if((int)str[i]==55)
            {   count7++;}
            else
            {   other++;}  
        }
        printf("%d\n",other);
    }

    return 0;
}
