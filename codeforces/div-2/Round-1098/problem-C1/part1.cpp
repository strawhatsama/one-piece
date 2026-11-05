//generate a number like 222, or 111, or 888,  if only a digit is given

#include<bits/stdc++.h>
using namespace std;

void solve() {

    int a;
    cin>>a;
    int x=0;

    for(int i=0;i<5;i++) {

        x=(x*10) +a;
    }

    cout<<x;

}

int main() {

    solve();
    return 0;
}

//successful

        