#include<bits/stdc++.h>
using namespace std;

void solve(){

    int n,k;
    cin>>n>>k;

    // time left for problem solving (240-k);
    // i will use brute force

    /* example 
    
    time left 30 minutes 
    
    first problem 5 minute 
    
    left 30-5
    
    next problem 10 minute
    
    left 25-10
    
    next problem  15 minutes 
    
    done 
    
    what if 34 minutes ?? time left 4 minutes so t should be > than 5 times i  */

      int t= (240-k);
      int count=0;
       int i=1;
       

    while(t>=(5*i)) {
    
        count++;

        t=(t-(5*i));
          

       
        i++;

    }
    
     if(count>n){
    cout<<n;
     }

     else {

        cout<<count;

     }


    count =0; // reset count

}

int main() {

    solve();
    return 0;

}
        

        

