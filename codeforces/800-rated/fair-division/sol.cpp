#include<bits/stdc++.h>
using namespace std;

void solve() {

    int t;
    cin>>t;

    
    int a=0;
    int b=0;


    for(int i=0;i<t;i++) {


        int l;
        cin>>l; 

        for(int k=0;k<l;k++) {

        int x;
        cin>>x;

        if(x==1) {

            a++;
        }

        else {

            b++;

        }

    }

        if((a + 2*b)%2!=0) {

            cout<<"NO"<<"\n";
            a=0;
            b=0;
        }

        else {

            cout<<"YES"<<"\n";
            a=0;
            b=0;

        }

    }


}

     



int main(){
    solve();
    return 0;
}



    
