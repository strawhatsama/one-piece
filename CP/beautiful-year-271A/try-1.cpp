#include<bits/stdc++.h>
using namespace std;
void solve()
{ //check if all digits are diff
  string s;
 cin>> s;
 int a=s.size();
 int c=stoll(s);

  set<char> set(s.begin(),s.end());

  int b=set.size();

  if(a==b)
  {cout<<stoi(s);
  }

   int j=0;
   while(a!=b)
 { 
   c++;

   string s= to_string(c);

 }

 cout<<c;

}

int main()
{solve();
 return 0;
}




   





  