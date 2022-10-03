#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    while(t--)
    {
        int n,sf=0,sl=0;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        for(int j=0,k=n-1;j<k;j++,k--)
        {
            sf+=arr[j];
            sl+=arr[k];
            if(sf==sl)
            break;
        }

    }
}
