#include<bits/stdc++.h>
using namespace std;

void solve()
{ string s;
  cin>>s;

  set<char> unique(s.begin(),s.end());

  int count = unique.size();

  if(count%2!=0)
  {cout<<"IGNORE HIM!"<<"\n";
  }

  else
  { cout<<"CHAT WITH HER!"<<"\n";
  }
}

  int main()
  { ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
  }