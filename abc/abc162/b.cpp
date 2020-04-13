#include <bits/stdc++.h>
using namespace std;

int main()
{
  int64_t N;
  cin >> N;

  int64_t ans = (1 + N) * N / 2;
  ans -= (1 + N / 3) * (N / 3) / 2 * 3;
  ans -= (1 + N / 5) * (N / 5) / 2 * 5;
  ans += (1 + N / 15) * (N / 15) / 2 * 15;

  cout << ans << endl;
}
