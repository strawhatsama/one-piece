#include<iostream>
using namespace std;

void solve()

{ int n,i;
    int count=0;
  cin>>n;
  int x,y,z;
  for(i=1;i<=n;i++)

  { cin>>x>>y>>z;

  {  if(x >0 && y>0 || y>0 && z>0 || x>0 && z>0 )
    count++;}}

    cout<< count;}

  int main()

  { solve();
    return 0;}

