#include<iostream>
using namespace std;

void solve()

{ long long  k,n,w;
    cin   >> k>>n>>w;

    if( (k* (w)*(w+1))/2 -n > 0)

    { cout<< (k* (w)*(w+1))/2 -n;
    
    }

    else { cout<< 0;
    }

}

int main()

{ solve();

    return 0;

}


