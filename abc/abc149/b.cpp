#include <bits/stdc++.h>
using namespace std;

int main()
{
  int64_t a, b, k;
  cin >> a >> b >> k;
  int64_t ans_t, ans_a;
  ans_t = max(a - k, (int64_t)0);
  k = max(k - a, (int64_t)0);
  ans_a = max(b - k, (int64_t)0);
  cout << ans_t << ' ' << ans_a << endl;
}
