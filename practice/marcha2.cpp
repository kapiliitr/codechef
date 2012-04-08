#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t,c=0,k=0;
    cin>>t;
    string * s=new string [t];
    while(t--)
    {
        int n,i=0,j,stem=1,temp,leaf=0;
        cin>>n;
        int * arr=new int [n];
        do
        {
            j=i;
            temp=stem;
            cin>>arr[i++];
            leaf=stem;
            leaf-=arr[j];
            stem=leaf*2;
        }while(arr[j]<=temp && i<n);
        if(i==n && leaf==0)
            s[c++]="Yes";
        else
            s[c++]="No";
    }
    while(c--)
        cout<<s[k++]<<endl;
    system("pause");
    return 0;
}
