#include<bits/stdc++.h>
using namespace std;
void solve()
{ int t;
cin>>t;

for(int i=0;i<t;i++)
{ string s;
  cin>>s;
 s[0]=tolower(s[0]);
 s[1]=tolower(s[1]);
 s[2]=tolower(s[2]);
 
 if(s[0]=='y' && s[1]=='e' && s[2]=='s')
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