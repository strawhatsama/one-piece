#include<bits/stdc++.h>
using namespace std;

void solve() {

    // number of test cases
    int t;
    cin>>t;

    // inputs

    for(int i=0;i<t;i++){

        int n,x,y,k;
        cin>>n>>x>>y>>k;

        if((n==2)||(n==3)){

            cout<<1<<"\n";

        }

        else{


        if(x>y) {

            int a = (x-y);
            int b = (n-a);

            int m = min(a,b);

            cout<< (k+m)<<"\n";

        }

        else if(y>x) {

            int a = (y-x);
            int b= (n-a);
            int m = min(a,b);
            cout<<(k+m)<<"\n";
        }

    }

    }


}


 int main() { 

    solve();
    return 0;

 }





        