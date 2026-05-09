#include<bits/stdc++.h>
using namespace std;

void solve()

{ int t;
 cin>>t;
 int count=0;

 for(int i=0;i<t;i++)
 { long long a,b;
   cin>>a>>b; // i can put it in 2d matrix
      
   int  j=0;

       while(a%b!=0)
   { a++;
    count++;

   }
// wrong  choice 


cout<<count; // does this count reset to 0 after  while loop is over?? no it keeps going on 
 }
}

 int main()
 { solve();
   return 0;
 }