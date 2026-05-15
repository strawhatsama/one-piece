#include <bits/stdc++.h>
using namespace std;

void solve()
{

    int n, r;
    cin >> n >> r;
    int a=n;

    int count = 1;

    int i = 2;


    if(n%10==0) {

        cout<<1;
        return ;

    }

    else 
    {
    while ((n % 10) != r)
    {

        count++;

        n = (n +a);

        if(n%10==0) {


            cout<<count;
            return ;

        }

        else {continue;
        }

        i++;
    }

    }

    

    cout << count;
}

int main()
{

    solve();
    return 0;
}