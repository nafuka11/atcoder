#include <bits/stdc++.h>
using namespace std;

int main()
{
  int X;
  cin >> X;

  int64_t ans = X / 500 * 1000;
  X %= 500;
  ans += X / 5 * 5;
  cout << ans << endl;
}
