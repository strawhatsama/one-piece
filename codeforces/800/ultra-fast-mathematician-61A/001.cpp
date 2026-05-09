#include<bits/stdc++.h>
using namespace std;

void solve()
 { string a;
   string b;

   cin>>a>>b;

   int l=a.size();

   for(int i=0;i<l;i++)

   {
     if(a[i]!=b[i])
     {cout<<1;
     }

     else
     {cout<<0;
     }
    }

}

int main()
{solve();
 return 0;
}
