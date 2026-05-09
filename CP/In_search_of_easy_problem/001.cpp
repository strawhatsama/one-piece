#include<bits/stdc++.h>
using namespace std;

void solve()
{ int n;
    cin>>n;
  int count=0;
 for(int i=0;i<n;i++)
 {  int a;
    cin>>a;

    if(a==1)
    { count++;;
    }

 }
  if(count==0)

  { cout<<"EASY";
  }

  else
  {cout<<"HARD";

  }

}

int main()
{solve(); 
  return 0;

}

// STATUS: AC