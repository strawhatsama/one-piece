#include <bits/stdc++.h>
using namespace std;

void solve()
{

    string a, b, c;
    cin >> a >> b >> c;

    // push into vector

    vector<char> v;

    for (int i = 0; i < a.size(); i++)
    {

        v.push_back(a[i]);
    }

    for (int j = 0; j < b.size(); j++)
    {

        v.push_back(b[j]);
    }

    // sort

    sort(v.begin(), v.end());

    bool same = true;
    // sorted

    for (int k = 0; k < v.size(); k++)
    {

        if ((v.size() == c.size()) && v[k] != c[k])
        {

            same = false;

            break;
        }
    }

    if (same)
    {

        cout << "YES";
    }

    else
    {
        cout << "NO";
    }
}

int main()
{

    solve();
    return 0;
}
