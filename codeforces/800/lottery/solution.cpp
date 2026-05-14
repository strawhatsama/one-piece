#include <bits/stdc++.h>
using namespace std;

void solve()
{

    int n;
    cin >> n;

    int a = (n / 100);
    int p = (n % 100);
    int b = (p / 20);
    int q = (p % 20);
    int c = (q / 10);
    int r = (q % 10);
    int d = (r / 5);
    int s = (r % 5);
    int e = (s / 1);
    int t = (s % 1);

    cout << (a + b + c + d + e);
}

int main()
{

    solve();
    return 0;
}
