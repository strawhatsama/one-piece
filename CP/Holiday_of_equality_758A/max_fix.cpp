#include <iostream>
using namespace std;
void solve()

{ int n,i;

 cin>>n;

 int p;
 cin>>p;
 
 int S=p;

 int M=p;
 for(i=1;i<n;i++)

 { int c;
   cin>>c;

   S=S+c;
 if(c>M)
 { M=c;}
 p=c;
 }

 cout<< n*M-S;
}

int main()

{ solve();
    return 0;

}// boom baby got the error 
// i am comparing my input with previous but i should compare it with max