#include <bits/stdc++.h>
using namespace std;

void solve()
{

    int row, col;
    cin >> row >> col;

    vector<vector<char>> m(row, vector<char>(col, 0));

    for (int i = 0; i < row; i++)
    {

        for (int j = 0; j < col; j++)
        {

            if (i % 4 == 0)
            {

                m[i][j] = '#';
            }

            else if (i % 4 == 1 && j != col - 1)
            {

                m[i][j] = '.';
            }

            else if (i % 4 == 1 && j == col - 1)
            {

                m[i][j] = '#';
            }

            else if (i % 4 == 2)
            {
                m[i][j] = '#';
            }

            else if (i % 4 == 3 && j == 0)
            {

                m[i][0] = '#';
            }

            else if (i % 4 == 3 && j != 0)
            {

                m[i][j] = '.';
            }
        }
    }

    for (int i = 0; i < row; i++)
    {

        for (int j = 0; j < col; j++)
        {

            cout << (m[i][j]);
        }

        cout << "\n";
    }
}

int main()
{

    solve();
    return 0;
}
