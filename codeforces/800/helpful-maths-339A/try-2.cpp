#include<bits/stdc++.h>
using namespace std;

void solve()
{// i take the input as a string and i want to sort partially i.e only the integers and not the symbols

    string s;
    cin>>s;
   int len=s.size();// if len is even half of string is int half is char , if len odd int> char
                    // in both cases int is  (len+1)/2 

// make a vector purely from the numbers and sort manually 
int a=(len+1)/2;
 vector<int>v(a);
 for(int i=0;i<len;i++)
 { if(i%2==0)
    {v[i]=s[i];
    }
}

// vector done
// sort first then write for loop to make another vector

set<int> my_set(v.begin(),v.end());

// range based for loop 
// print the set 
// why is this error ???


for(int x:my_set)
{cout<<x<<" ";
}
}

int main()
{solve();
 return 0;
}


