#include<bits/stdc++.h>
using namespace std;

void solve() {

    int n,t;
    cin>>n>>t;

    string s;
    cin>>s;
    vector<char>mod(t);

    int j=1;
    while(j<=t) {

     for(int i=0;i<t-1;i++){

        if((s[i]=='B') && s[i+1]=='G') {
            
            mod[i]=s[i+1];
            mod[i+1]=s[i];
        }

        else {
            mod[i]=s[i];
            mod[i+1]=s[i+1];
        }
     }

     j++;
    }

    for(int k=0;k<t;k++) {
        cout<<mod[k];
    }

}

int main() {
    solve();
    return 0;
}
// NOTHING HAPPENED