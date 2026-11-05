#include<bits/stdc++.h>
using namespace std;

void solve() {

    string a="Timur";
    sort(a.begin(),a.end());
    bool same =false;

    int t;
    cin>>t;

    for(int i=0;i<t;i++) {
        
         int n;
         cin>>n;
        string s;
        cin>>s;


        //to lower case
        //sort now 

        sort(s.begin(),s.end());

        //sorted

        if((s.size()!=a.size())) {

            cout<<"NO"<<"\n";
        }

        else 
        {

            for(int i=0;i<s.size();i++) {

                if(s[i]==a[i]) {

                    same =true;
                }

                else {

                    same =false;
                    break;
                }
            }

            if(same) {

                cout<<"YES"<<"\n";
            }

            else {

                cout<<"NO";
            }

        }


    }


}


 int main() {

    solve();
    return 0;

 }
