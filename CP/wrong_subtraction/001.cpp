/*Taken an input n which is you number 

input k which is number of times you subtract 1 


print the final result



How to subtract 1 from a number 


if unit digit is non zero subtract 1  

if unit digit is zero divide by 10*/


#include <iostream>
using namespace std;

void solve()

{ long long n,k,i;
  cin>>n>>k;
 
  for(i=1; i<=k; i++)
 { if (n%10!=0)
  { n--;}

  else if (n%10==0)
  { n=n/10;}
 }
 cout<<n;
}

int main()

{ solve();
  return 0;

}
 

