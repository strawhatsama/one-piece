#include<bits/stdc++.h>
using namespace std;

void solve() {

    int t;
    cin>>t;
    int count=0;

    long long b=0;
    long long c=0;
    long long d=0;

    long long f,g,h;
    long long backup;

    for(int i=0;i<t;i++) {

        long long a,n,x,y;

        cin>>a>>n>>x>>y;

        backup=a;

        if(a==0) { 

            cout<<min(x,y)<<"\n";
        }

        else {



        // b contains only x or y 

        // find two three numbers : xxxxx(mo of digits same as a), and (yyyy) , and yyyy( no of digit is one less)

    // find number of digits in a

    while(a>0) {

        a=(a-(a%10))/10; // this is the problem
        count ++;
    }
    // number of digits done

    for(int j=0;j<count;j++){

    b=(b*10)+x;
    c=(c*10)+y;

    }
      

    if(backup>9) {
    for(int k=0;k<(count-1);k++) {

        d=((d*10)+ (max(x,y)));

    }
}

else {

    d=max(b,c);

}
    //compare all three numbers to a

    if(b>backup) {

        f =(b-backup);
    }
    else { f=(backup-b);
    }

    if(c>backup) {

        g=(c-backup);
    }

    else {

        g=(backup-c);

    }
         
      
    
     if(d>backup) {

        h=(d-backup);
     }

     else {

        h=(backup-d);
     }

      
    cout<< min(min(f,g),h)<<"\n";
    b=0;
    c=0;
    d=0;
    count=0;

}

}


}

 int main() {


    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
   return 0;

 }



// perfect i cracked the code but let's reset everything so that it doesn't create trouble






