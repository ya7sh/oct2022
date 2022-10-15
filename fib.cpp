#include<iostream>
using namespace std;
int main()
{
    int a=0,b=1,n,c;
    cin>>n;
    cout<<a<<" "<<b<<" ";
    //c=a+b;
    for(int i=3;i<=n;i++)
    {
        c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
    }
}