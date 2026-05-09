#include<bits/stdc++.h>
using namespace std;

void solve()

{ string s;
    getline(cin>>ws,s);

    for(int i=0;i<s.size();i++)
    { if(s[0]>=97)
        { s[0]=s[0]-32;}
 
       

        cout<<s[i];
    }
}
    int main()
    {solve();
        return 0;
    }

    // done