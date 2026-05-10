/*This problem teaches me two way to use vector

1) presize ( to preserve the elements always use index input)
2) empty vector and push_back throughout*/

#include<bits/stdc++.h>
using namespace std;

void solve() {

    int n;
    cin>>n;
    

    int p;
    cin>>p;
    vector<int> v;

    for(int i=0;i<p;i++) {

        int y;
        cin>>y;
        v.push_back(y);
    }// the vector i created here is lost somehow


     int q;
     cin>>q;
      
    for(int j=0;j<q;j++) {
         int x;
         cin>>x;

        v.push_back(x);


    }

    //vector done

    set<int>s(v.begin(),v.end());
    //sorted

    int len = s.size(); 

    // 0 might be there in the set and it might not be there in the set

    if( (len)==n) {

        cout<<"I become the guy.";
    }

    else {

        cout<<"Oh,my keyboard!";

    }
}


int main() {

    solve();
    return 0;

}