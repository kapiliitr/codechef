#include<iostream>
using namespace std;
void fact(int );
int multiply(int [],int,int);
int main()
{
    int t,i;
    cin>>t;
    int * n=new int [t];
    for(i=0;i<t;i++)
        cin>>n[i];
    for(i=0;i<t;i++)
        fact(n[i]);
    system("pause");
    return 0;
}
void fact(int n)
{
    int a[200]={0},temp=n,i=0,j;
    while(temp>0)
    {
        a[i++]=temp%10;
        temp/=10;
    }
    j=multiply(a,n-1,i);
    for(i=j-1;i>=0;i--)
        cout<<a[i];
    cout<<endl;
}
int multiply(int a[],int n,int p)
{
    if(n>0)
    {
        int temp=0,x,i=0;
        do
        {
            x=a[i]*n+temp;
            a[i]=x%10;
            temp=x/10;
            i++;
        }while(temp>0 || i<p);
        return multiply(a,n-1,i);
    }
    else
        return p;
}
