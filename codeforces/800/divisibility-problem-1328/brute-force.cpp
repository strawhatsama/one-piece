#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long t;
    cin >> t;
    long long count = 0;
    for (long long i = 0; i < t; i++)
    {
        long long x, y;
        cin >> x >> y;
        long long j = 0;

        while (x % y != 0)
        {
            count++;
            x++;
        }
        j++;

        cout << count << "\n";
        count = 0;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}
// time limit exceed
// use vectors