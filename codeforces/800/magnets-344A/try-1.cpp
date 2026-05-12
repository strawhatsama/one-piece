#include<bits/stdc++.h>
using namespace std;

void solve() {

    int t;
    cin>>t;
    vector<int>v;

    for(int i=0;i<t;i++) {
      
        int a;
        cin>>a;
     v.push_back(a);
    }
        
     int count=1;
    for(int i=0;i<v.size()-1;i++) { 

        if(v[i]==v[i+1]) {
            count=count;
        }

        else {

            count++;
        }

    }

    cout<<count;
}

int main() { 

    solve();
    return 0;
}