#include<bits/stdc++.h>
using namespace std;

void solve()
{int n;
 cin>>n;
 string s;
 getline(cin>>ws,s);
  int l=s.size();
  int a=0;
  int d=0;

  for(int i=0;i<l;i++)

  {

    if(s[i]=='A')
    {a++;
    }

    else 
    {d++;
    }
}

 if(a<d)
 {cout<<"Danik";
 }

 else if(a>d)
 {cout<<"Anton";
 }

 else 
 {cout<<"Friendship";
 }
}

int main()
{solve();
 return 0;
}



