#include <iostream>
using namespace std;
void solve()
{ int a,b;
    cin>>a>>b;
    int count=0;


if( a<=b)
{ a=a*3 ;
  b=b*2;
  count++;
}
  else
  { cout<< count;
  }
}

int main()

{ solve();
    return 0;
    
