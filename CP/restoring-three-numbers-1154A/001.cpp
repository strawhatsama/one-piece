#include<bits/stdc++.h>
using namespace std;

void solve()
{ int p,q,r,s;
 cin>>p>>q>>r>>s;

 if(p+q+r==s*2)

 { cout<<s-p<<" "<<s-q<<" "<<s-r;

 }

 else if(q+r+s==p*2)

 { cout<<p-q<<" "<<p-r<<" "<<p-s;

 }

 else if(p+r+s==q*2)
 {cout<<q-p<<" "<<q-r<<" "<<q-s;
 }
 
 else if(p+q+s==r*2)
 {cout<<r-p<<" "<<r-q<<" "<<r-s;
 }

}

int main()
{ solve();
  return 0;
}