#include <bits/stdc++.h>
using namespace std;

void solve()
{

    vector<int> v;
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    v.push_back(d);

    int x = v.size();

    set<int> unique(v.begin(), v.end());

    // length

    int y = unique.size();

    cout << (x - y);
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
