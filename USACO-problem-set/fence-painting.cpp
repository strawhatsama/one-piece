#include<bits/stdc++.h>
using namespace std;

void solve() {

    int a,b,c,d;
    cin>>a>>b>>c>>d;

    int x = min(a,c);
    int y= max(b,d);

    cout<<(y-x);
    