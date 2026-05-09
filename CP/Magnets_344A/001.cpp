/*i have to input n numbers , if previous and current are equal count 1 

example 

10 10 
count 1 group

if previous not equal to current continue 

*/

#include <iostream>
using namespace std;

void solve()

{ int n,i;
  cin>>n;
  int count=0;

 int prev;
 cin>>prev;

 for(i=1;i<n;i++)

 { int cur;
   cin>> cur;

   if( prev==cur) // there is a diff between = and ==
   { count++;}
   
   else if( prev!=cur && n<=2 && n>=2)

   {count=2;
   }
   prev=cur;
   
}
 if(n!=1)

 { cout<< count;
 }

 else

 { cout<<1;

 }
 
}

int main()

{ solve();

  return 0;

}