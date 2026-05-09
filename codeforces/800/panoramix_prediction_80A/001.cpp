#include<bits/stdc++.h>
using namespace std;

void solve()
{int n,m;
    cin>>n>>m;
    bool isPrime=true;
  int x=n+1;
 for(int i=2;i<x;i++)
 {if(x%i==0)
  { isPrime=false;
  }
  else
  {isPrime=true;
  }
}
x++;

// mot done 