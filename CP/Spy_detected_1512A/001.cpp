#include<bits/stdc++.h>
using namespace std;

 void solve()
 { // number of test cases
    int t;
    cin>>t;
    // 100 test cases each case must have at most 100 len arr

    // for each test case input first integer n equals number of elements in the array
    bool spy=true;
    for(int i=0;i<t;i++)
    { int n;
        cin>>n;
        // n inputs inside the array
       vector<int>v(n);

        for(int j=0;j<n;j++)
        { cin>>v[j];
        }
       
      // check uniqueness
     for(int k=0;k<v.size();k++)
     { for(int p=0;p<v.size();p++)

        { if(k==p)
            {continue;
            }

            else if(v[k]==v[p])
            { spy=false;
                break;
            }

            else
            {spy=true;
             break;
             
            }
        }

         if(spy==true)

        { cout<<k+1<<"\n";
         
        }
        else if(spy==false)
        {continue;
        }
    }
     

    v.clear();

}

 }

 int main()
 {solve();
    return 0;
 }
    

         

      
            
    



// a good attempt 
// refine it
