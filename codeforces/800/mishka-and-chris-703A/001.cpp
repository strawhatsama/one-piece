#include<bits/stdc++.h>
using namespace std;

void solve()
{ int r;
  cin>>r;
  int a=0;
  int b=0;

  // take inputs

  for(int i=0;i<r;i++)
   { int m,c;
     cin>>m>>c;

     if(m>c)
     {a++;} 

     else if(m<c)
    { b++;
    }

   

}

if(a>b)
{cout<<"Mishka";
}
else if(a<b)
{cout<<"Chris";
}

else if(a==b)
{cout<<"Friendship is magic!^^";
}

}


int main()
{solve();
 return 0;
}

 

     