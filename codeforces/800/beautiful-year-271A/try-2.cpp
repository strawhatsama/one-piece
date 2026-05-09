#include<bits/stdc++.h>
using namespace std;

void solve()
{ int z;
  cin>>z;
  int a = z+1;
  
 bool unique=false;
 

  int i=0;

  while(unique==false)
 {
  vector<int> v(4,0);

  v[0]= (a%10);

  int b= (a-v[0])/10;

  v[1]=(b%10);

  int c= (b-v[1])/10;

  v[2]= (c%10);
  
   int d= (c-v[2])/10;

   v[3]=d;

   set<int> set(v.begin(), v.end());

   if(v.size()==set.size())
   { unique=true;
     
     cout<<a;
     break;
   
   }
 


   else
   {a++;
   }
}


}

int main()
{solve();
 return 0;
}

   
   