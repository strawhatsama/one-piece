#include <bits/stdc++.h>
using namespace std;

void solve()
{

    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {

        int x, y;
        cin >> x >> y;

        int a = x % y;

        if (a == 0)
        {
            cout << a << "\n";
        }
        else
        {

            cout << (y - a) << "\n";
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
