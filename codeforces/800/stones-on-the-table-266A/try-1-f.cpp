#include<bits/stdc++.h>
using namespace std;

void solve() {

    int t;
    cin>>t;
    string s;
    cin>>s;
    int len=s.size();
 


    set<char>unique(s.begin(),s.end());

    int a = unique.size();
    //check the condition
   int count=0;
    if(s[len-2]==s[len-1] && len!=1) {
        count++;
     }
     
     else
     { count=0;}
     
    
    for(int i=0;i<=len-3;i++ && len>2) {

        if((s[i]==s[i+1]) || (s[i+1]==s[i+2])) {
            count++;
        }

     
    }


    if(count>1 && a!=1) {
        cout<<count-1;
    }

    else if(count>1 && a==1)
    { cout<<count;
    }
    else if(count==1){
        cout<<1;
    }

     else {
        cout<<0;
     }
}


int main() {
    solve();
    return 0;
}