#include<bits/stdc++.h>
using namespace std;

void solve()
{// number of soldiers
 
 int t;
 cin>>t;
 vector<int>v(t);
 //inputs 
  int j=0;
  int k=0;

  int a,b;
  for(int i=0;i<t;i++)
  {
    cin>>v[i];

  }
  int max=v[0];
  int min=v[0];
  //vector is created
  // count position of maximum and minimum value 
  // in a vector can i find max and without doing anything?? 
  // well let me use brute force

  for(j;j<t && j!=t-1;j++)
  {  if(v[j]>=v[j+1])
    { max = v[j];
        a=j;
    }

}


// how to count the index of max 
  for(k;k<t && k!=t-1;k++ )
  {  if(v[k]<=v[k+1])
    { min = v[k];
      b=k;// this is wrong because it will simply replace k with k-1 and the whole purpose of max min is lost
    } 

}


 if(a==0 && b!=0)
 { cout<<(b+1);
 }

 else if ( a!=0 && b==0)
 {cout<<(a+1);
 }

 else if(a>0 &&b>0)
 { cout<<(a+1)+b;
 }

 else if(a==0 &&b==0)
 {cout<<0;
 }
}

int main()
{solve();
 return 0;
}


  

  