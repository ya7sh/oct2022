#include<bits/stdc++.h>
using namespace std;

int main(){
  vector<int> v(10);
  
  cout<<"Enter the elements in array:";
  
  int sum=0;
  
  for(int i=0;i<10;i++)
    cin>>v[i];
  
  cout<<"The sum of the given elements:"<<accumulate(v.begin(),v.end(),0);
  
  return 0;
}
