#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string a,b;
    while(t--)
    {
        cin>>a>>b;
        int i=0,found=0;
        while(i<6 && !found)
        {
            if(b.compare(a.substr(i,5))==0)
                found++;
            else 
                i++;
        }
        if(found)
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
    system("pause");
    return 0;
}

