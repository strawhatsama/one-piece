#include<bits/stdc++.h>
using namespace std;

void solve()
{string s;
getline(cin>>ws,s);
long long  len=s.size();
long long count=0;
for(long long  i=0;i<len;i++)

{ if(s[i]=='4'||s[i]=='7') //4774 but what about 400744
    {
     count++;
    }

}

 if(count>0 && count==4 || count==7)

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

