#include<iostream>
#include<vector>
using namespace std;

int main()
{ vector<int>primes{2,3,5,7,11,13};//list initialiser  {elements separated by comma}
  for(int prime: primes)//range based for loop 

   { cout<< prime<<" ";
   }

   return 0;

}

// This is example of range based for loop , 
//i do not understand exactly what it does