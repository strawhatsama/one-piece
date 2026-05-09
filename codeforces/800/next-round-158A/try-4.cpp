#include<bits/stdc++.h>
using namespace std;

void solve()
{ int n,k;
  cin>>n>>k;

  vector<int>v(n);
  int count =0;
  for(int i=0;i<n;i++)
  { cin>>v[i];
  }

 int a= v[k-1];

  for(int j=0;j<n;j++)
  {if ( v[j]>=a && v[j]>0)
    { count++;
    }

}

 cout<<count;
}

int main()
{ ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
 return 0;
}