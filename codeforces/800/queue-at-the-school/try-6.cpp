#include<bits/stdc++.h>
using namespace std;
void solve() {
     int n,t;
     cin>>n>>t;
    string s;
    cin>>s;

    vector<char>v(s.size(),0);
   
    int a=0;
    while(a<t) {

    for(int i=0;i<=s.size()-2;i++ ) {

        if((s[i]=='B') && (s[i+1]=='G')) {
            
            v[i]=s[i+1];
            v[i+1]=s[i];
        }

        else {

              
            v[i+1]=s[i+1];
        }
       
       
        
    }

     //rewrite s;

     
    for(int k=0;k<v.size();k++) { 
        
        s[k]=v[k];
    }

    a++;

}

 for(int k=0;k<v.size();k++) { 
        
        cout<<v[k];
    }
 


}

int main() {
    solve();
    return 0;
}