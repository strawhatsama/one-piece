#include<bits/stdc++.h>
using namespace std;
void solve() {

    int t;
    cin>>t;

    vector<int>v(t);

    v[t-1]=0;


    for(int i=0;i<t-1;i++){

        int a;
        cin>>v[i];

        

    }
    //sort

    sort(v.begin(),v.end());
    //sorted

    //check
    // 1 2 3 5 
    // 1 2 3 4

    for(int j=0;j<t;j++) {

        if(v[j]!=(j+1)) {

            cout<<(j+1);
            break;
        }

    }

}

int main() {

    solve();
    return 0;
}



            

