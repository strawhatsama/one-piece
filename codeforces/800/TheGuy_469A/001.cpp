#include<bits/stdc++.h>
using namespace std;

void solve()
{int n;
 cin>>n;
 vector<int>v{};
 vector<int>z{};
 int p;
 cin>>p;
//p inputs
 for(int i=0;i<p;i++)
 {
    cin>>v[i];
 }

 // q inputs
 int q;
 cin>>q;

 for(int j=0;j<p;j++)
 { ;
    cin>>z[j];
 }


 // this is not a good solution
 //instead put all in one vector and then use std::set to remove the duplicates 
 // start at 1 , check v[0]==1 , if yes proceed 1 becomes 2 now check if 2 ==v[1] , if yes proceed

 