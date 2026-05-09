/*i am trying to find max from a list of numbers

but i cannot store the numbers so 

i input a number before starting the loop

and after starting the loop i keep comparing the numbers and store the max now

i want to use that max value and subtract  inputs from it one by one and add them individually 

but  i am not sure how to do it */


#include<iostream>
using namespace std;

void solve()
 {int n,i;
 cin>>n;
 
 int prev;
  cin>>prev;
 int item_box=prev;
 int S= prev;
 
   

 for(i=1;i<n;i++)

 { int a;
    cin>>a;
   S=S+a;

 
  if(a>=prev)
 { item_box=a;
   
   }
  
  prev= a; 

  

 
    

 }


 cout<< n*(item_box)-S;

}

int main()

{ solve();
    return 0;
 //The loop is over so now i have the max value 
 // but the input stream is gone 
 /*Let's look at what i need to find  say my max is M

 (M-a1) + (M-a2)+......+(M-an) = n time M - sum of all the numbers
 
 */ 



 

}