#include<bits/stdc++.h>
using namespace std;

int main() {


int n;
cin>>n;
vector<int>v(n);

for(int i=0;i<n;i++) {

cin>>v[i];

                      }

//vector is created now count

map<int ,int>m;

for(int x:v) 
{
   m[x]++;   

}

// print

for(auto & x : m)
{
    cout<<x.first<<"->"<<x.second<<"\n";

}

return 0;

}