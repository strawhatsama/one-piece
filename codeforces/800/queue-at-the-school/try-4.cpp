//write a simple string and flip particluar elements

#include<bits/stdc++.h>
using namespace std;

void solve() {

    string s;
    cin>>s;

    if(s[1]='G') {
        
      ( ( s[2]=s[1] )&&( s[1]=s[2]));
    }
 
    cout<<s;
}

int main() {

    solve();
    return 0;
}


//failed

// this is not possible 
// extract then replace into other string or vector
