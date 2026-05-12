#include<bits/stdc++.h>
using namespace std;
void solve() {
    
    string s;
    cin>>s;

    vector<char>v(s.size(),0);

    for(int i=0;i<s.size()-1;i++) {

        if((s[i]=='B') && (s[i+1]=='G')) {
            
            v[i]=s[i+1];
            v[i+1]=s[i];
        }

        else {

            
            v[i+1]=s[i+1];
        }
       
        
    }

    //check the vector


    for(int k=0;k<v.size();k++) { 
        
        cout<<v[k];
    }

}

int main() {
    solve();
    return 0;
}