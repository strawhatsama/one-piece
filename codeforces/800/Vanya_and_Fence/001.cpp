#include<iostream>
using namespace std;

void solve()

{ int n,h,i,a;
    long long count=0;

    cin>>n>>h;

for(i=1;i<=n;i++)
 
 {cin>>a;

if(a>h)
{count=count+2;
}

else
{ count = count+1;
}

 }

 cout<<count;

}

int main()

{ solve();

    return 0;
}
