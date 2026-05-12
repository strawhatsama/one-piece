// wrong ( don't know the reason)



#include<bits/stdc++.h>
using namespace std;

void solve() {

    int t;
    cin>>t;

    int a,b;
    cin>>a>>b;

    int prev = (b-a);
     int max=prev;


    for(int i=0;i<t-1;i++) {

        int x,y;
        cin>>x>>y;
         
        int current=(y+prev-x);
        
        if(current>prev) { max = current;}

        prev=current;
    }

    cout<<max;
}

int main() {

    solve();
    return 0;
}
