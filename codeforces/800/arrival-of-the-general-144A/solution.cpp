#include <bits/stdc++.h>
using namespace std;

void solve()
{

    int t;
    cin >> t;

    vector<int> v;
    int j = 0;
    while (j < t)
    {

        int a;
        cin >> a;
        v.push_back(a);
    }
    // vector formed , find max and min
    int max = v[0];

    for (int i = 0; i < t; i++)
    {

        if (v[i] >= v[0])
        {

            max = v[i];
        }
    }

    int x = max;

    int min = v[t - 1];
    for (int i = 0; i < t; i++)
    {

        if (v[i] <= v[0])
        {

            min = v[i];
        }
    }

    int y = min;

    if ((x == v[0]) && (y == v[t - 1]))
    {
        cout
