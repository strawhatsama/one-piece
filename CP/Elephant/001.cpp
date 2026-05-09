#include<iostream>
using namespace std;

void solve()

{ int x;
  cin>>x;
 
  if(x%5==0)
 { cout<< x/5;

 }

 else
 { cout<< (x-x%5)/5 +1;
 }

}
int main()

{ solve();
 return 0;

}

// there is also a trick if we want ot divide a number A by B then do this (A+B-1)/B
