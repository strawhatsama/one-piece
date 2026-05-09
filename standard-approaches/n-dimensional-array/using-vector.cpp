#include<bits/stdc++.h>
using namespace std;

void solve()
{ int rows;
  int columns;

  cin>>rows>>columns;

  vector<vector<int>> matrix(rows,vector<int>(columns,0));

  // this means make a vectors with elements = rows
  // where each element itself is a vector with columns

  // this is matrix using vectors

  // let's take input

  for(int i=0;i<rows;i++)
  { for(int j=0;j<columns;j++)
    { cin>>matrix[i][j];
    }
}
}

int main()
{ios::sync_with_stdio(false); //correct line 
    
    cin.tie(NULL);

 solve();

 return 0;
}