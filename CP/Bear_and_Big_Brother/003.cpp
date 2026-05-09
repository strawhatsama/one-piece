#include <iostream>
using namespace std;

void solve()
{ int a,b;
    cin>>a>>b;
 
  int count=0;

    if ( a<=b)

    { a=a*3;
      b=b*2;
      count++;
    }

    cout<< count;
}

int main()

{ solve();
  return 0;

} // why is the output for 4 7  = 1 ? it should be 2
 // if is not a loop??

 //Reason : If is not a loop it's a one way door that opens exactly once
