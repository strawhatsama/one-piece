#include <bits/stdc++.h>
using namespace std;

void solve()
{

  int a, b, c, d;
  cin >> a >> b >> c >> d;
  // solution 1

  if ((a == b) && (b == c) && (c == d))
  {

    cout << 3;
  }

  else if (((a == b) && (b == c)) || ((b == c) && (c == d)) || ((a == c) && (c == d)))
  {

    cout << 2;
  }

  else if ((a == b) || (b == c) || (c == d))
  {

    cout << 1;
  }

  else if ((a != b) && (b != c) && (c != d))
  {
    cout << 0;
  }
}
int main()
{

  solve();
  return 0;
}

// stupid way