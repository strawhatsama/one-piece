#include<bits/stdc++.h>
using namespace std;

void solve() {

    // test cases
    long long  t;
    cin>>t;
    long long a;
       int n,x,y;//because x and y are digits

       
       long long count=0;
       long long b=0;
       long long c=0;
       long long d=0;
       long long f=0;
       long long g=0;
       long long h=0;


 //take the inputs

 for(int i=0;i<t;i++) {

       

       cin>>a>>n>>x>>y;

       //count number of digits

        long long r=a;
       while(a>0) {

         a=(a-(a%10))/10;
         count++;
         }
       
         if(r==0) {

           cout<<min(x,y)<<"\n";
           
         }
         
         else if(count==1) {
        

          if(r>x) {

            f=(r-x);
          }

          else {

            f=(x-r);

          }

          if(r>y) {

            g=(r-y);
          }

          else{

            g=(y-r);

          }

          cout<<min(f,g)<<"\n";
          count=0;
          b=0;
          c=0;
          

        }


     else {

        for( long long j=0;j<count;j++) {

            b=((b*10)+x);

            c=((c*10)+y);
        }


     for(long long k=0;k<(count-1);k++) {

         d=((d*10)+(max(x,y)));
     }


     if(r>b){

        f=(r-b);
     }

     else {

        f=(b-r);
     }

     if(r>c) {

        g=(r-c);

     }

     else {
        
        g=(c-r);

     }

     h=(r-d);


     cout<< min((min(f,g)),h)<<"\n";
     count=0;

     b=0;
     c=0;
     d=0;

    }

}

}




int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

  solve();
  return 0;

}

            




    
    

         
     
