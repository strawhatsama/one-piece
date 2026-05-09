#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void solve()
{ string s;
    cin>>s;
    int j;
 // use if loop to sort integers only
 // Bottle neck is i do not know sorting properly
  if(s[j]==0)
 sort(s.begin(),s.end());
 //the string is sorted 

 int len=s.size();
 for(int i=0;i<len;i++)
 cout<<s[i];
}
int main()
{solve();

    return 0;
}