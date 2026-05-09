/*It is a simlpe maths problem

If M time N is even we need to find  M times N divided by 2

If off M time N = 2q + 1 , hence q = M times N minus 1 divided by 2*/

#include <iostream>
using namespace std;

void solve()
{ int M,N;
    cin>>M>>N;
    // simple divisiblity problem

    if((M*N)%2==0)
    {cout<< (M*N)/2;
    
    }

    else 

    { cout<< ((M*N)-1)/2;

    }

}

int main()

{ solve();

 return 0;

}