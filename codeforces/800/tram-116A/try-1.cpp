#include<bits/stdc++.h>
using namespace std;

void solve() {

    int t;
    cin>>t;

    //make a 2d array
    
    int col=1;

    vector<vector<int>> m(t,vector<int>(col,0));

    vector<int>v;
    //store the inputs 

    for(int i=0;i<t;i++) {
        for(int j=0;j<2;j++) {

            cin>>m[i][j];
        }
    }
     
    //count the diff

    int a = (m[0][1] - m[0][0]);
    for(int i=0;i<t;i++ && i>0) {

        int b= (m[i][1]+(a-m[i][0]));

        v.push_back(b);
        a=b;

    }

    //vector is created 
    //sort

    sort(v.begin(),v.end());
    //sorted 
    int c=v[t-2];

    int d =( m[0][1] - m[0][0]);

    cout<<max(c,d);

}

int main() {
    solve();
    return 0;
}



// to much complications bruh