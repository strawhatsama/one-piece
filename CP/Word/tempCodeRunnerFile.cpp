#include<iostream>
#include<string>
using namespace std;

int main()
{ string s;
    getline(cin>>ws,s);
    int len=s.size();
    int c1=0;
    int c2=0;
  for(int i=0;i<len;i++)
  // capital letters are stored from 65 to 90 and lower cases from 97 to 112

 {if(s[i]<=90)
 {c1++;
 }

 else if(s[i]>=97)
 {c2++;
 }
 }

 for( int j=0;j<len;j++)
 {if(c1<c2 && s[j]<=90)
   { s[j]+=32;
     cout<<s[j];
 
 
} 
else if(c1<c2 &&s[j]>=97)
{ cout<<s[j];
}

else if(c1>c2 && s[j]>=97)
{ s[j]=s[j]-32;
    cout<<s[j];
}
else if( c1>c2 && s[j]<=90)
{cout<<s[j];
}
else if(c1=c2 && s[j]<=90)
 {s[j]+=32;
    cout<<s[j];
 }
 else if(c1=c2 && s[j]>=97)
 { cout<<s[j];
 }

}
 return 0;
}

