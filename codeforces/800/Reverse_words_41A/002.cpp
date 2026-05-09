#include<bits/stdc++.h>
using namespace std;

void solve()
{ string s,t;
    cin>>s>>t;

    int l1=s.size();
    int l2 =t.size();
    bool isA=true;
 
 for(int i=0;i<s.size();i++)
  {if(s[i]==t[l2-1-i] && l1==l2) // reverse makes sense if size is same
 { isA=true;
 }

 else{ isA=false;
       break;// put break so that loop is dead the moment condition is not true
 }
}

  if(isA)
  {cout<<"YES";
  }
  else
  {cout<<"NO";
  }


}

int main()
{ solve();
    return 0;
}

// this was the perfect example to use bool