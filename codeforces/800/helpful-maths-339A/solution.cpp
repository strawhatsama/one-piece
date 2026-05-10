#include<bits/stdc++.h>
using namespace std;

void solve() {

    string s;
    cin>>s;
    //input taken

//extract what is to be sorted

    vector<int> v;
    for(int i=0;i<s.size();i+=2) {

        v.push_back(s[i]);
    }

    //sort

    sort(v.begin(),v.end());

    //sorted 
    //push into the original string

    int idx=0;

    for(int i=0;i<s.size();i+=2) {

        s[i]=v[idx];

        idx++;
    }
    //sorted 

    // print

 for(int i=0;i<s.size();i++) {
    cout<<s[i];
 }

}

int main() {
    solve();
    return 0;
}