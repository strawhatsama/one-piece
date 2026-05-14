#include <bits/stdc++.h>
using namespace std;

void solve()
{

    string s;
    getline(cin >> ws, s);

    set<char> unique(s.begin(), s.end());

    int len = unique.size();

    if (len == 2)
    {
        cout << 0;
    }

    else if (len == 3)
    {

        cout << 1;
    }

    else
    {

        cout << (len - 4);
    }
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}