#include<iostream>
using namespace std;
bool palindrome(unsigned long long int );
unsigned long long int find(unsigned long long int);
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        unsigned long int num;
        cin>>num;
        cout<<find(num+1)<<endl;
    }
    system("pause");
    return 0;
}
unsigned long long int find(unsigned long long int n)
{
    if(palindrome(n))
        return n;
    else
    {
        return find(n+1);
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

