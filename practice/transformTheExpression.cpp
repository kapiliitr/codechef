#include<iostream>
#include<string>
using namespace std;
void expression(string );
int main()
{
    int i,k;
    cin>>i;
    string *s=new string [i];
    for(k=0;k<i;k++)
        cin>>s[k];
    for(k=0;k<i;k++)
        expression(s[k]);
    system("pause");
    return 0;
}
void expression(string s)
{
    int k=0,a=0,b=0;
    char str[400],exp[400];
    while(s[k]!='\0')
    {
        if(s[k]=='(');
        else if(s[k]>='a' && s[k]<='z')
        {
            str[a++]=s[k];
        }
        else if(s[k]==')')
        {
            str[a++]=exp[--b];
        }
        else
        {
            exp[b++]=s[k];
        }
        k++;
    };
    str[a]='\0';
    cout<<str<<endl;
}
