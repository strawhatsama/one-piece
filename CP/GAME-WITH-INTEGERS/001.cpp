//1-2-1-2-1-2-1-2-1-2-1-2-1-2-1-2-1


#include<bits/stdc++.h>
using namespace std;

void solve()
{ int t;
    cin>>t;
    int count=0;
for(int i=0;i<t;i++)
  
{int a;
 cin>>a;
 // vanya's turn 
  // does it reset to zero for second test case??
  if((a--)%3==0 && count<=10)
  { count++;
    cout<<"First";

  }

  else if((a--)%3!=0&&count<=10)
  { a++;
    count++;
  }


}

// later