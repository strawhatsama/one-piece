#include<bits/stdc++.h>
using namespace std;

void solve()
{int n;
 cin>>n;

 
 int p;
 int q;
 cin>>p;
 //declare vector sized p

  vector<int>v(p);
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
//use std::set

set<int> value(v.begin(),v.end());

// set is sorted 

// now check

 int d=value.size();
 int e=n-d-1;
 
 bool clear=true;
  
  
for(int x:value)
// range based for loop
// edge case: what if p =0 and q=0 ? well then print oh my keyboard
// what if p=0 then q should contain all the levels else false
{  
    if(x==e&& e<=n && d==n) //e=0 what about x ? since there are no elements it's also 0 ?
                            // i must handle the case size is 0
    {  clear=true;

        
    }

    
   

    else
    { clear=false;
        break;

        
    }

    e++;
}

   

       if(clear==true && d!=0)
       {cout<<"I become the guy.";
       }
        
       else if(d==0)
    
  {cout<<"Oh, my keyboard!";
    
  }
       else
       {cout<<"Oh, my keyboard!";

       }

    }

    int main()
    { solve();
        return 0;
    }

    // This problem teaches diff between intialisation(=) vs bool check(==)
    // still wrong
    //do it again