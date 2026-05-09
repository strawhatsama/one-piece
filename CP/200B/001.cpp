#include<bits/stdc++.h>
using namespace std;

void solve()

{ int n;
    cin>>n;
  
    vector<int>v(n);

    for(int i=0;i<n;i++)

    { int x;
        cin>>x;
      v.push_back(x);
    }

     int a=accumulate(v.begin(),v.end(),0);

     long double b =a/100;

     long double z= (b/n)*100;



      for(int k=0;k<n;k++)
      {cout<<v[k];
      }
}


int main()

{ solve();
  return 0;
}

      