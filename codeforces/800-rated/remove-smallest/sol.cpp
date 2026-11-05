#include<bits/stdc++.h>
using namespace std;

void solve() {

    int t;
    cin>>t;
    vector<int> v;
    int count=0;

    for(int i=0;i<t;i++) {

        int l;
        cin>>l;

        for(int j=0;j<l;j++) {

            int e;
            cin>>e;
            v.push_back(e);

        }

        //vector ready

        for(int k=0;k<l-1;k++) {

            for(int m=k+1;m<=k+1;k++){

                if((v[k]==v[m]+1) || (v[k]==v[m]-1)){

                    count++;
                }

            }

        }

        if(count=(l-1)){

            cout<<"YES"<<"\n";
        }

        else {

            cout<<"NO"<<"\n";

        }

    }


}


int main() {
    solve();
    return 0;
}



