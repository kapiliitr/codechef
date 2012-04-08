#include<iostream>
using namespace std;
int sum(int [], int [],int);
int main()
{
    int i,a,b,temp,len1,len2,size;
    int *x;
    int *y;
    cin>>a>>b;
    while(a>0 || b>0)
    {
        len1=len2=0;
        temp=a;
        while(temp>0)
        {
            len1++;
            temp/=10;
        }
        temp=b;
        while(temp>0)
        {
            len2++;
            temp/=10;
        }
        size=(len1>=len2)?len1:len2;
        x = new int [size];
        y = new int[size];
        for(i=size-1;i>=0;i--)
        {
            x[i]=a%10;
            a/=10;
            y[i]=b%10;
            b/=10;
        }
        int carry;
        carry=sum(x,y,size);
        if(!carry)
            cout<<"No carry operation."<<endl;
        else if(carry==1)
            cout<<"1 carry operation."<<endl;
        else
            cout<<carry<<" carry operations."<<endl;
        cin>>a>>b;
    }
    delete [] x;
    delete [] y;
    system("pause");
    return 0;
}
int sum(int a[], int b[], int l)
{
    int i,c=0,f=0;
    for(i=l-1;i>=0;i--)
    {
        if((c+a[i]+b[i])>9)
        {
            c=(c+a[i]+b[i])/10;
            f++;
        }
    }
    return f;
}

