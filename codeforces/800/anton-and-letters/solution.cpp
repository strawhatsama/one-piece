#include <bits/stdc++.h>
using namespace std;

void solve()
{

    string s;
    getline(cin >> ws, s);

    // ignore all ws

    s.erase(remove_if(s.begin(), s.end(), ::isspace), s.end());

    // string is safe

    set<char> unique(s.begin(), s.end());

    // unique

    int len = unique.size();

    if (len > 3)
    {
        cout << (len - 3);
    }
    else if (len == 2)
    {
        cout << 0;
    }

    else if (len == 3)
    {
        cout << 1;
    }
}

int main()
{

    solve();
    return 0;
}