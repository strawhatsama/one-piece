#include <bits/stdc++.h>
using namespace std;

void solve()
{

    string a = "Tetrahedron";
    string b = "Cube";
    string c = "Octahedron";
    string d = "Dodecahedron";
    string e = "Icosahedron";

    int t;
    cin >> t;

    vector<int> v;

    for (int i = 0; i < t; i++)
    {

        string s;
        cin >> s;

        if (s == a)
        {

            v.push_back(4);
        }

        else if (s == b)
        {

            v.push_back(6);
        }

        else if (s == c)
        {

            v.push_back(8);
        }

        else if (s == d)
        {

            v.push_back(12);
        }

        else if (s == e)
        {

            v.push_back(20);
        }
    }

    long long sum = accumulate(v.begin(), v.end(), 0);

    cout << sum;
}

int main()
{

    solve();
    return 0;
}
