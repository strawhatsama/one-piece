#include<bits/stdc++.h>
using namespace std;

void solve()
{int n;
 cin>>n;
 vector<int>v;
 
 int p;
 int q;
 cin>>p;
//p inputs
 for(int i=0;i<p;i++)
 {
    cin>>v[i];
 }
// store the q inputs in the same vector

//q inputs
// resize vector to access q more blocks
 cin>>q;

 v.resize(p+q);
 for(int j=p;j<p+q;j++)
 {
    cin>>v[j];
 }
//use std::set

set<int> value(v.begin(),v.end());

// set is sorted 

// now check

 bool clear=true;

for(int x:value)
// range based for loop
{  int f=1;
    if(x!=f)
    {  clear=false;
        break;
    }

    else
    { clear=true;
         continue;
      f++;
    }
}

       if(clear)
       {cout<<"I become the guy.";
       }

       else
       {cout<<"Oh, my keyboard!";

       }

    }

    int main()
    { solve();
        return 0;
    }
