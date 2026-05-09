#include<iostream>
#include<string>
using namespace std;

void solve()
{ int n,i;
    int x=0;

    cin>>n;
    string cm;
 
 for(i=1;i<=n;i++)

 
 {cin>>cm;
 
 if( cm =="x++"||cm=="++x")
 {x++;
 }

 else if( cm=="x--"||cm=="--x")
 {x--;
     
 }
 }
 cout<< x;

}
int main()

{ solve();

    return 0;

}
  








  