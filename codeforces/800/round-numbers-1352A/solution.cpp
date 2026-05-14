#include <bits/stdc++.h>
using namespace std;

void solve()
{

    int n;
    cin >> n;
    int count = 0;
    // let's store in vector
    //  check if all digits are 0 or not
    // 10000 , 12345

    if (n % 1000 != 0)
    {

        count++;
        n = (n % 1000);
    }

    else if (n % 1000 == 0)
    {

        cout << 1 << "\n"
             << n;
    }

    if (n % 100 != 0)
    {

        count++;
        n = (n % 100);
    }

    else

        if (n % 10 != 0)
    {

        count++;
    }
