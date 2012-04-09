#include<iostream>
using namespace std;
bool palindrome(unsigned long long int );
unsigned long long int convert(unsigned long long int , unsigned long long int & );
int main()
{
    unsigned long long int n,i,num,pal;
    cin>>n;
    while(n--)
    {
        cin>>num;
        i=0;
        pal=convert(num,i);
        cout<<i<<" "<<pal<<endl;
    }
    system("pause");
    return 0;
}
unsigned long long int convert(unsigned long long int n, unsigned long long int & i)
{
    if(palindrome(n))
        return n;
    else
    {
        unsigned long long int temp=n,rev=0,pal=0;
        i++;
        while(temp>0)
        {
            rev*=10;
            rev+=temp%10;
            temp/=10;
        }
        pal=n+rev;
        if(palindrome(pal))
            return pal;
        else
            return convert(pal,i);                      
    }   
}
bool palindrome(unsigned long long int n)
{
    unsigned long int temp=n,rev=0;
    while(temp>0)
    {
        rev*=10;
        rev+=temp%10;
        temp/=10;
    }
    if(n==rev)
        return true;
    else
        return false;
}
