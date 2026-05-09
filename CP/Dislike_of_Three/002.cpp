#include <iostream>

using namespace std;

void solve()
{ // input t : total test cases and define i

  int t,i;
  int y_i,n;
  cin>>t;
  /*Start the loop 
   Store the even numbers */


   for(i=1;i<=t;i++)

   {  
    
   
    cin>>n;

    if(n%2==0)

    { int y_i=n; // = is operation?? it says that whatver value n has give it to y_i?
                 // it creates memory but throws it away?
    }

   }
  
   cout<< y_i<<"";
}

   int main()

   { solve();
    return 0;

   }
// why is the compiler giving garbage value to y_i??

//because y_i is not equal to y1 , y2 , y3 and so on