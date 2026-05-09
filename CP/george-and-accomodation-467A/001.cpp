#include<bits/stdc++.h>
using namespace std;

void solve()
{int t;
 cin>>t;
 int count=0;

 for(int i=0;i<t;i++)
 { int p,q;
  cin>>p>>q;
  int a=q-p;

  if(a>=2)
  { count++;
  }
}
   cout<<count; // is count reset to 0 after every turn? no and we don't need to
   // i can solve using 2d matrix ?-
}

int main()
{solve();
 return 0;
}