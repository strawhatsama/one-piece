#include<bits/stdc++.h>
using namespace std;

void solve() {

    string s;
    cin>>s;

    vector<int> v;

    v.push_back(s[0]);
    v.push_back(s[2]);

    int a =accumulate(v.begin(),v.end(),0);

    cout<<a;



}

int main() {
    solve();
    return 0;
}