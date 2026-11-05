#include<bits/stdc++.h>
using namespace std;

void solve() {

    int t;
    cin>>t;

    for(int i=0;i<t;i++) {

        int a,b,c,d;
        cin>>a>>b>>c>>d;

        if((b>a) || (c>a) || (d>a)){
            cout<<1;
            
        }

        else if (((b>a) && (c>a)) || ((b>a)&&(d>a)) || ((c>a) &&(d>a))){

            cout<<2;
            
        }

        else if(((b>a) && (c>a) &&(d>a))){

            cout<<3;
           break;

        }

        else {cout<<0;

        }

    }

}


int main() {

    solve();
    return 0;
}
