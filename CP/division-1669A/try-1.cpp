#include<bits/stdc++.h>
using namespace std;

void solve()
{ int t;
  cin>>t;

  for(int i=0;i<t;i++)
  { int a;
    cin>>a;

    if(a<=1399)
    {cout<<"Division 4"<<"\n";
    }

    else if(a>=1400 && a<=1599)
    {cout<<"Division 3"<<"\n";
    }

    else if(a>=1600 && a<=1899)

    {cout<<"Division 2"<<"\n";
    }

    else if(a>=1900)

    {cout<<"Division 1"<<"\n";
    }
}
}

int main()
{solve();
 return 0;
}