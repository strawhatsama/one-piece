#include<bits/stdc++.h>

using namespace std;

void solve()
{ int n,k;
  cin>>n>>k;

// total minutes in hand 240 minutes 
// time left for problem 240-k , 18
// time take to solve k problems (5(k)(k+1))/2
// max problems =( 240-k) mod 5;

// do it again