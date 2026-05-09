#include<bits/stdc++.h>
using namespace std;

void solve()

{  int count=0;
    
    int arr[4];
    int current_size=0;
   for(int i=0;i<4;i++)
   { long long a;
    cin>>a;

    arr[current_size++]=a;

   }
    for(int j=0;j<4;j++)
    { for(int k=0;k<4;k++)

        { if(arr[j]==arr[k])

            {count++;}

}

    }

    cout<<count-2;

}
int main()
{solve();
    return 0;
}