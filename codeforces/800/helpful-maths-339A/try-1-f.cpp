#include<bits/stdc++.h>
using namespace std;
 void solve()
{ string s;
  cin>>s;
  int len=s.size();

  // create two vectors 

  vector<int>v1;
  vector<char>v2;

  for(int i=0;i<len;i++)

  { if(i%2==0)
    {v1[i]=s[i];
    }

    else
    {v2[i]=s[i];
    }

}

 set<int>sorted(v1.begin(),v1.end());
 //sorted

// both vectors are created
// now the output 


if(len%2==0)

{for(int x:sorted)
   { 
   }
}


// wrong 