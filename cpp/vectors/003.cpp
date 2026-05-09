#include<bits/stdc++.h>
using namespace std;

int main()
{ vector<int> v={2,6,99,23,456};
  
  cout<<"last element is:"<<v.back()<<"\n";
  v.push_back(37);
  v.push_back(87);
  cout<<"Current size is:"<<v.size()<<"\n";
  cout<<"Current last element is;"<<v.back()<<"\n";
  cout<<v.front();

  return 0;
}