#include<bits/stdc++.h>
using namespace std;

void solve()
{ int n;
  cin>>n;
  vector<int>v{};
  int a=0;
  int b=0;
  int c=0;

  for(int i=0;i<n;i++)
  { cin>>v[i];

    if(v[i]==1)
    {a++;
    }

    else if(v[i]==2)
    {b++;
    }

    else if(v[i]==3)
    {c++;
    }

  } // handle the cases when atleast 1 of 1 2 3 is not there
     int z=min(a,b,c); // maximum teams 
   if(a!=0 && b!=0 && c!=0)
  {cout<<z;
  }

  else
  {cout<<0;
  }

    sort(v.begin(),v.end());
    //vector is sorted 
    // 1 will be exactly a time 
    //b exactly b times 
    //c exactly c times

    // let's print the index
    // print exactly z times






  

