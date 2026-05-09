#include<bits/stdc++.h>
using namespace std;
void solve()

{ string s;
 getline(cin>>ws,s);
 int l=s.size();
 int count=0;
 bool a=true;

 for(int i=0;i<l;i++)

 { for(int j=0;j<l;j++)

   { if(s[i]==s[j] && i!=j )
    { a=false;
    }

    else if(i==j) //wjmzbmr
    { a=a;}

    else
    {a=true;
    }
}
    if(a==true)
    {count++;
    }

}
   if(count%2==1)
   {cout<<"IGNORE HIM!";
   }

   else
   { cout<<"CHAT WITH HER!";
   }

}


int main()
{solve();
    return 0;
}

//wrong answer
