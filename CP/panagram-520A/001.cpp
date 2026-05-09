// use set , if count =26 , yes this is the answer

#include<bits/stdc++.h>

using namespace std;

void solve()
{  int t;
cin>>t;
    
    
    string s;
    cin>>s;

 int a =s.size();

 for(int i=0;i<a;i++)
 {s[i]=tolower(s[i]);
 }
 // all lower case 

 // use set and check count


 set<char> b(s.begin(),s.end()); // string uniqueness 
                                 //

 int d=b.size();

 if(d==26)
 { cout<<"YES";
 }

 else
 {cout<<"NO";
 }

}

int main()
{solve();
 return 0;
}


