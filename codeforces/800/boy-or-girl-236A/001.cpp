#include<iostream>
#include<string>
using namespace std;

void solve()
{ string s;
  cin>>s;
  int len=s.size();
  int count=0;
 for(int i=0;i<len-1;i++)
 { if(s[i]==s[i+1])
  {count++;
  }
  else
  { continue;
  }
}
  if(s[len-2]==s[len-1])
 { count++;
 }
 else
 {count=count;
 }

 if(count%2==0)
 { cout<<"CHAT WITH HER!";
 }
 else
 { cout<<"IGNORE HIM!";
 }
}

int main()

{ ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  solve();

  return 0;}

  // this is wrong because i am not registering unique ones and i am not checking the entire string to find a match

  // i must check every s[i] and check whether i have seen it before or not if i have seen it i count every time i see it