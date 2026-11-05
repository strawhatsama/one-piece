#include<bits/stdc++.h>
using namespace std;
void solve() {

    int t;
    cin>>t;
    

    for(int i=0;i<t;i++) {

        int n,a,b,k;

        cin>>n>>a>>b>>k;

        if(a>b){

            cout<<(k+(a-b))<<"\n";
        }
        else 
        {
            cout<<(k+(b-a))<<"\n";

        }
    }

}

int main() {
    solve();
    return 0;
}