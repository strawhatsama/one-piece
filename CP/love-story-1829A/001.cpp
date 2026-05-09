#include<bits/stdc++.h>
using namespace std;
void solve()
{  int t;
    cin>>t;
    int count=0;
    string c="codeforces";

    for(int i=0;i<t;i++)
    {   string s; 
         cin>>s;

         for(int j=0;j<10;j++)
         {if(s[j]!=c[j])

            { count++;
        }
        
    }
          cout<<count<<"\n"; // does it change to 0 or not ?  no you must manually change it to zero
           count=0;

    }
}
  int main()
{  solve();
   return 0;
}
