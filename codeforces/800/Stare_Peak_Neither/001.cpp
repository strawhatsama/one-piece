#include<bits/stdc++.h>

using namespace std;

void solve()

{ long long t;
    cin>>t;

    for(int i=1;i<=t;i++)
    {

        long long a,b,c;
        cin>>a>>b>>c;

        if(a<b && b<c)
        {cout<<"STAIR"<<"\n";
        }
        else if(a<b && b>c)
        {cout<<"PEAK"<<"\n";
        }

        else
        { cout<<"NONE"<<"\n";
        }
    }
}

int main()

{ solve();
    return 0;
}


//STATUS:AC