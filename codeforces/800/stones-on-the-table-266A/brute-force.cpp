#include<bits/stdc++.h>
using namespace std;

void solve() { // try to count repetetions directly
    
     int t;
     cin>>t;
    string s;
    cin>>s;
    int r=0;
    int b=0;
    int g=0;
    int count=0;
    int i;
    int j;
    // nested for loop

    for(int i=0;i<t;i++) { // i and j are always consecutive 

        for(j=i+1;j<=i+1;j++) {

            if((s[i]=='R') && (s[i]!=s[j])) {

                break;
            
            } else if( (s[i]=='R') &&(s[i]==s[j])) {
                r++;

            }


            
            if((s[i]=='B') && (s[i]!=s[j])) {

                break;
            
            } else if( (s[i]=='B') &&(s[i]==s[j])) {
                b++;

            }


            
            if((s[i]=='G') && (s[i]!=s[j])) {

                break;
            
            } else if( (s[i]=='G') &&(s[i]==s[j])) {
                g++;

            }

        }

    }


        cout<<r+b+g;

}
    



    int main() {

        solve();
        return 0;
    }


    // boomm baby i am done