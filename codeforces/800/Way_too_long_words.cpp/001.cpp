/* input n 
take n inputs 

if size<=10 print the word 

else print first letter followed by number of letter between first and last then print last */

#include<iostream>
#include<string>
using namespace std;

void solve()

{ int n,i;
  cin>>n;
string s;
for(i=1;i<=n;i++)
{ cin>>s;
  int len=s.size();

  if(len>10)

  { cout<<s[0]<<len-2<<s[len-1]<<"\n";
  }
  else
  { cout<<s<<"\n";

  }
}

}

int main()

{ ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}

