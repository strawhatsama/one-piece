#include<bits/stdc++.h>
#include<cmath>
using namespace std;

void solve() {

    long long n;
    cin>>n;
    if(n%2==0) { 

        long long k=n/2;

         cout<<k;

    }

    else { 
        
        
        long long m= (n-1)/2;
        
        cout<< -(m+1);

    }

}

int main() { 

    solve();
    return 0;
}
          

    