#include<bits/stdc++.h>
using namespace std;

void solve() {

    int t;
    cin>>t;

    int a,b;
    cin>>a>>b;
    vector<int>v;

    int prev = (b-a);
     
    v.push_back(prev);


    for(int i=0;i<t-1;i++) {

        int x,y;
        cin>>x>>y;
         
        int current=(y+prev-x);
        
        v.push_back(current);
        prev=current;

     
    }

    sort(v.begin(),v.end());


    cout<<v[t-1];
}

int main() {

    solve();
    return 0;
}
