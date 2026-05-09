#include<iostream>
#include<vector>
using namespace std;

int main()
{ vector<int>primes{2,3,5,7,11,13};//list initialiser  {elements separated by comma}
  for(int i=0;i<primes.size();i++)

   { cout<< primes[i]<<" ";
   }

   return 0;

}