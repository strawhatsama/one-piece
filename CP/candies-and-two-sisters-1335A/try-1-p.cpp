#include<bits/stdc++.h>
using namespace std;
// classic stars and bars problem

int main()
{ int t;
 cin>>t;
 for(int i=0;i<t;i++)
 { long long a;
cin>>a;
 
 if(a%2==0)
 { cout<< (a-2)/2<<"\n";

 }

  else
  { cout<<a/2<<"\n";
    
  }

}
 return 0;
}
// it can be better 