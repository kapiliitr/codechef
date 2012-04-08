#include<iostream>
using namespace std;
int main()
{
    unsigned long long int t,temp,i,j,a,b,c,len1,len2,size;
    int *x;
    int *y;
    int * ans;
    cin>>t;
    while(t--)
    {
        temp=i=j=a=b=c=len1=len2=size=0;
        cin>>a>>b;
        temp=a;
        while(temp>0)
        {
            len1++;
            temp/=10;
        }
        x = new int [len1];
        for(i=0;i<len1;i++)
        {
            if(a%10)
                x[len1-i-1]=a%10;
            a/=10;
        }
        temp=b;
        while(temp>0)
        {
            len2++;
            temp/=10;
        }
        y=new int[len2];
        for(i=0;i<len1;i++)
        {
            if(b%10)
                y[len2-i-1]=b%10;
            b/=10;
        }
        size=(len1>=len2)?len1:len2;
        ans=new int [size+1];
        i=c=0;
        while(i<len1 && i<len2)
        {
            ans[i]=(c+x[i]+y[i])%10;
            c=(c+x[i]+y[i])/10;
            i++;
        }
        for(j=i;j<len1;j++)
        {
            ans[i]=(c+x[i])%10;
            c=(c+x[i])/10;
            i++;
        }
        for(j=i;j<len2;j++)
        {
            ans[i]=(c+y[i])%10;
            c=(c+y[i])/10;
            i++;
        }
        if(c)
            ans[i++]=c;
        j=0;
        while(!(ans[j]))
            j++;
        while(j<i)
        {
            cout<<ans[j++];
        }
        cout<<endl;     
    }
    system("pause");
    return 0;
}

