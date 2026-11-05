#include<bits/stdc++.h>
using namespace std;

void solve() {

    int a,b;
    cin>>a>>b;

    int c = min(a,b);
    int d = max(a,b);
    cout<< c<<" ";

    int e = (d-c);

    cout<<(e/2);

}

int main() {
    solve();
    return 0;
}