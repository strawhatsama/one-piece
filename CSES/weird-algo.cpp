#include<bits/stdc++.h>
using namespace std;

void solve() {

    long long n;
    cin>>n;

    cout<<n<<" ";
 
 while(n>1){
  if(n%2==0) {

    while(n%2==0) {

        cout<<(n/2)<<" ";

        n=(n/2);

    }

}


else {

    while(n%2==1) {

    cout<<((3*n)+1)<<" ";

    n=((3*n)+1);
    }

}

 }

}


int main() {

    solve();
    return 0;

}

