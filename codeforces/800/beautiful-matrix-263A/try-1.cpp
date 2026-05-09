/* It is a simple idea

 if i am not on (2,2) 
 
  the minimum distance i need to travel is the sum of vertical and horzontal distance between where i am and destination*/

#include<bits/stdc++.h>
using namespace std;

void solve()
{ int rows=5;
  int cols=5;

  vector<vector<int>> matrix(rows,vector<int>(cols,0));
    for(int i=0;i<5;i++)
   
  { for(int j=0;j<5;j++)
    {cin>> matrix[i][j];
    }
}


  for(int i=0;i<5;i++)
   
  { for(int j=0;j<5;j++)
    {
      if((matrix[i][j]==1))

       { 
          if(i>=2 && j<=2)
          {cout<< ((i-2)+(2-j));
          }
          else if(i>=2 && j>=2)
          {cout<< ((i-2)+(j-2));
            break;

          }

          else if(i<=2 && j<=2)
          {cout<<( (2-i)+(2-j));
            break;
          }

          else if(i<=2 && j>=2)
          {cout<<((2-i)+(j-2));
            break;
          }


       }

      
         
    }

}
}
  

// matrix is formed 

 int main()
 { solve();
  return 0;
 }


