#include<bits/stdc++.h>
using namespace std;

void solve() {

    int n;
    cin>>n;
    vector<int>v;

    for(int i=0;i<n;i++) {

        int a;
        cin>>a;

        v.push_back(a);
    }

    int total = accumulate(v.begin(),v.end(),0);

     double c= n*100;
    double d= total*100;

      double result = d/c;

     printf("%.10f\n", result);
}

int main() {

    solve();
    return 0;
}