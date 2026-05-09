// just print the vector and set first

#include<bits/stdc++.h>
using namespace std;

void solve()
{int n;
 cin>>n;
 
 
 int p;
 int q;
 cin>>p;
 vector<int>v(p);//declare size
//p inputs
 for(int i=0;i<p;i++)
 {
    cin>>v[i];
 }
// store the q inputs in the same vector

//q inputs
// resize vector to access q more blocks
 cin>>q;

 v.resize(p+q);
 for(int j=p;j<p+q;j++)
 {
    cin>>v[j];
 }

  for(int k=0;k<p+q;k++)

  { cout<<v[k]<<" ";
  }


}

int main()
{ solve();
    return 0;
}

// error fixed 
// declare size to get slots 