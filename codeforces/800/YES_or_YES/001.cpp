#include<bits/stdc++.h>
using namespace std;
void solve()
{ int t;
cin>>t;

for(int i=0;i<t;i++)
{ string s;
  cin>>s;

  if((s[0]=='y'||s[0]=='Y') &&(s[1]=='e'||s[1]=='E') && (s[2]=='S'||s[2]=='s')) //paranthese is must
  { cout<<"YES"<<"\n";
  }

  else
  {cout<<"NO"<<"\n";
  }
}
}

int main()
{ios_base::sync_with_stdio(false);
 cin.tie(NULL);

 solve();
}