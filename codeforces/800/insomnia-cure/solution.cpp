#include <bits/stdc++.h>
using namespace std;

void solve()
{

    int k, l, m, n, d;

    cin >> k >> l >> m >> n >> d;

    //(d/k) + d/l + d/m + d/n
    // pincipal of exclusion and inclusion
    // S(a+b+c+d) = a + b + c+ d -(ab -ac-ad-bc-bd-cd) + (abc+acd+acd+bcd)-(abcd)

    int a = lcm(k, l);
    int b = lcm(k, m);
    int c = lcm(k, n);
    int e = lcm(l, m);
    int f = lcm(l, n);
    int g = lcm(m, n);

    int h = lcm(lcm(k, l), m);
    int i = lcm(lcm(k, m), n);
    int j = lcm(lcm(k, l), n);
    int p = lcm(lcm(l, m), n);

    int q = lcm(lcm(k, l), lcm(m, n));

    cout << ((d / k + d / l + d / m + d / n) - (d / a + d / b + d / c + d / e + d / f + d / g) + (d / h + d / i + d / j + d / p) - (d / q));
}
int main()
{

    solve();
    return 0;
}
