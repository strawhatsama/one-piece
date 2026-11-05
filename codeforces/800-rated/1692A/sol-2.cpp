#include<bits/stdc++.h>

using namespace std;

void solve() {

    int t;
    cin>>t;
    int count =0;

    vector<int>v(4);
       
     for(int i=0;i<t;i++) {
    for(int j=0;j<4;j++) {

       cin>>v[j];


    }

     
  for(int k=0; k<4;k++) {

     if(v[k]>v[0]) {
        count++;
     }

    }

    cout<<count<<"\n";
    // reset count 
    count=0;

}

}

int main() {
    solve();
    return 0;

}