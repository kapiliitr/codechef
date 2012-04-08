#include<iostream>
#include<string>
using namespace std;
int holes(string);
int main()
{
    int t,i;
    cin>>t;
    string * str=new string[t];
    for(i=0;i<t;i++)
        cin>>str[i];
    for(i=0;i<t;i++)
        cout<<holes(str[i])<<endl;
    system("pause");
    return 0;
}
int holes(string s)
{
    int i=0,count=0;
    while(s[i]!='\0')
    {
        switch(s[i])
        {
            case 'B': count+=2; break;
            case 'A': count+=1; break;
            case 'D': count+=1; break;
            case 'O': count+=1; break;
            case 'P': count+=1; break;
            case 'Q': count+=1; break;
            case 'R': count+=1; break;
        }
        i++;
    }
    return count;
}
