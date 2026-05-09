#include<iostream>
using namespace std;

void solve()

{long long  n{},i{}, p{};

 cin>>n>>p;

 long long M=p;
 

 for(i==1;i<n;i++)

 {  long long c;
   cin>>c;

   if(c>p)

   { M=c; // operation
   }
 

 
   p=c; // operation
}
cout<< M;

}

int main()

{ solve();

    return 0;

}
// this outputs last number 
// mow first ??

// there is a problem here by defining all the variables at once i gave them random chache value that's why cout was 56

/*

Fix1: Define variable when needed and initally assign nothing*/