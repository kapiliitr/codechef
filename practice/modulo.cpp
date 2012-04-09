#include<iostream>
using namespace std;
bool found(int [],int ,int);
int main()
{
    int t=10;
    while(t--)
    {
        int n[10],r[10],f[10];
        int i=0,j=0;
        while(i<10)
        {
            cin>>n[i];
            r[i]=n[i]%42;
            if(!(found(f,j,r[i])))
                f[j++]=r[i];
            i++;                            
        }
        cout<<j<<endl;
    }
    system("pause");
    return 0;
}
bool found(int a[],int n,int d)
{
    int found=0,i=0;
    while(!found && i<n)
    {
        if(a[i]==d)
            found++;
        else
            i++;    
    }
    if (found)
        return true;
    else
        return false;
}
