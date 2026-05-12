#include<bits/stdc++.h>
using namespace std;

void solve() {

    int n,t;
    cin>>n>>t;

    string s;
    cin>>s;
     int len=s.size();
     bool check=true;
    //edge case is the last element of string

    // use a vector to track the changes and rewrite the string 

    vector<char> v(t);

    // if BG found simply rewrite the string 
    for(int i=0;i<=len-2;i++) { 

        if((s[i]=='B')&&(s[i+1]=='G')) {
             check =true;
            v[i]=s[i+1];
            v[i+1]=s[i];
        }

        else {v[i]=s[i];
        }
    }