#include<bits/stdc++.h>
using namespace std;

void solve(){

    int n;
    cin>>n;

    if(n%2==0) {

        int a=n/2;
        int b=n/2;

        if(a%2==0) {

            cout<<a<<" "<<b;
        }

        else if(a%2!=0) {

            cout<<(a-1)<<" "<<(b+1);
        }

    }


    else if(n%2!=0) {

        int a =(n+1)/2;
        int b = (n-1)/2;

    }

    //ic
   
    