#include<bits/stdc++.h>
using namespace std;

void solve()
{ int t;
  cin>>t;

  for(int i=0;i<t;i++)
  { int a,b,c;
    cin>>a>>b>>c;

    if((a+b)==c)
    { cout<<'+'<<"\n";

    }

    else if((a-b)==c)
    { cout<<'-'<<"\n";
    }

}
}
int main()
{ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  solve();

  return 0;
}