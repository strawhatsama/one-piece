#include<bits/stdc++.h>
using namespace std;

void solve() {

    int t;
    cin>>t;
     
    vector< pair<int,int>>v;

    for(int i=0;i<t;i++) {

        int a;
        cin>>a;
      pair<int ,int > p= {a,i+1};

       v.push_back(p);
    }

    // (2,1) , (3,2) , (4,3) , (1,4)

    sort(v.begin(),v.end());
    //sorted 
    //example : { (1,4) , (2,1) , (3,2) , (4,3)}



    for(int j=0;j<t;j++) {

        cout<< v[j].second<<" ";
    }

}

int main() {
    solve();
    return 0;
}

