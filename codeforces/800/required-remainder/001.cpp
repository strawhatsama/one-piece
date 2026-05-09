#include<bits/stdc++.h>
using namespace std;

void solve()
{ int t;
    cin>>t;

    for(int i=0;i<t;i++)
    { long long x,y,n;
      cin>>x>>y>>n;
       int j=0;
      while(n%x!=y&&n>=0)
      {n--;
       
      }
        j++;
      
        if(n%x==y)
        {cout<<n;
        }
    }

}

int main()
{solve();
 return 0;
}
      

      
    
      
// not working