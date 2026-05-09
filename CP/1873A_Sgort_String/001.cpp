#include<bits/stdc++.h>

using namespace std;

void a()
{ int t;
  cin>>t;

  for(int i=0;i<t;i++)
  { string s;
    cin>>s;

    if(s=="abc"||s=="acb"||s=="bac"||s=="cba")
    {cout<<"YES"<<"\n";
    }
    else
    {cout<<"NO"<<"\n";
    }
}

}

int main()
{ a();
 return 0;
}