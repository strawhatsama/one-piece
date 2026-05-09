#include<iostream>
#include<string>
using namespace std;

void solve()
{ int X=0;
    int t;
    cin>>t;

 for(int i=0;i<t;i++)
  {
    string s;
    cin>>s;
   if(s=="X++"||s=="++X")
    {  X++;
    }
    else if(s=="X--"||s=="--X")
    { X--;
    }
}
   cout<<X;

}

int main()
{ solve();
  return 0;
}

  