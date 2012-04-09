#include<iostream>
using namespace std;
int main()
{
    int x;
    float y;
    cin>>x>>y;
    if(x%5==0 && y>=x+0.5)
        y-=(x+0.5);
    cout<<y<<endl;
    system("pause");
    return 0;
}
