#include<bits/stdc++.h>
using namespace std;
void solve()
{ string a,b;
  cin>>a>>b;
  int l=a.size();
  bool equal=true;
  //check for difference but before that convert all to lower case

  for(int i=0;i<l;i++)
  { a[i]=tolower(a[i]);
    b[i]=tolower(b[i]);
  }

  //now check for difference 

  for(int j=0;j<l;j++)

  { if(a[j]==b[j])
    {   equal=true;
       
    }
  else // error here because as soon as false break it 
  { equal=false;
  }
  }
 if(equal==true)
 {cout<<0;
 }

   
  for(int k=0;k<l;k++)
 {
   {  if(a[k]>b[k])
    { cout<<1;
      break;
       
    }

    else if(a[k]<b[k])
    {cout<<-1;
        break;
    
       
    }
}
 }


 
// this extra shit is causing trouble
}

int main()
{solve();
 return 0;
}
