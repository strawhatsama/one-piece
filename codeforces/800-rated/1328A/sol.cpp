#include<bits/stdc++.h>

using namespace std;

void solve(){

    int t;
    cin>>t;

    for(int i=0;i<t;i++) {
        long long a,b;
        cin>>a>>b;

        if(a%b==0) {
            
            cout<<0<<"\n";
        }

     else { int x =a%b;


        int y=(b-x);
             




        cout<<y<<"\n";


     }

    }


}



int main() {

    solve();
    return 0;
}