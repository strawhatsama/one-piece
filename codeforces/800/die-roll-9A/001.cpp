#include<bits/stdc++.h>
using namespace std;

void solve()
{ int y,w;
  cin>>y>>w;

  //if y==w dot wins the probability is 1/1
  // if y!=w and y or w is 6 probability is 0/1

  if(y==w)
  {cout<<"1/1";}

  else if(y!=w && y==6 || w==6)
  {cout<<"0/1";
  }
  int m=max(y,w);

 
  
  // now find the numbers between m and 6 i.e 7-m 

  int n=7-m; // this equals number of numbers






 

// later