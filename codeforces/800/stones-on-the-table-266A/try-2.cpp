#include<bits/stdc++.h>
using namespace std;

void solve() {

    int t; // length of string
    cin>>t;

    string s;
    cin>>s;

    // handle edge cases first 

    //1. if length==1

    if(t==1){
        cout<<0;
    }


    //2. if length =2
    if(t==2 && s[0]==s[1]){
        cout<<1;
    }

    else if(t==2 && s[0]!=s[1]){
        cout<<0;
    }

    //3. if all charaters are same

     set<char> unique(s.begin(),s.end());

     int len=unique.size();
     if(len==1){
        cout<<t-1;
     }


     for(int i=0;i<t;i++) {

        for(int j=0;j<t;j++) {

        }}
