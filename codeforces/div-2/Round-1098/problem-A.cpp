#include<bits/stdc++.h>

using namespace std;

void solve() {

    int t;
    cin>>t;
    vector<int>v;
    int zero =0;
    int one =0;
    int two =0;


    for(int i=0;i<t;i++) {

        int n;
        cin>>n;
        for(int j=0;j<n;j++) {

            int a;
            cin>>a;
            v.push_back(a);
        }
        //vector is created 

        // count number of zeros, ones and twos 

        for(int k=0;k<v.size();k++) {

            if(v[k]==0) {

                zero++;
            }

            else if(v[k]==1){

                one++;

            }

            else if(v[k]==2) {

                two++;

            }

            
           

            

        }


         cout<<(zero + (min(one,two)) +(one-(min(one,two)))/3 +(two-(min(one,two)))/3)<<"\n";

        zero=0;
        one=0;
        two=0;
        v.clear();



    }


}


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;

}



