#include <bits/stdc++.h>
using namespace std;

void solve()
{

    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {

        int x;
        cin >> x;
        int a = (x + 1);
        int b = (x - 1);

        if ((a % 3 == 0) || (b % 3 == 0))
        {

            cout << "First" << "\n";
        }

        else
        {
            cout << "Second" << "\n";
        }
    }
}

int main()
{

    solve();
    return 0;
}