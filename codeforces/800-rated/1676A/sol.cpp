#include<bits/stdc++.h>
using namespace std;

void solve() {



    int t;
    cin>>t;

    for(int j=0;j<t;j++) {
    string s;
    cin>>s;

    vector<int> v;

    for(int i=0;i<6;i++) {

        v.push_back(s[i]);

    }

     int a = v[0];
     int b= v[1];
     int c=v[2];
     int d= v[3];
     int e= v[4];
     int f= v[5];

     int x= (a+b+c);
     int y= (d+e+f);

     if( x==y) {
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

