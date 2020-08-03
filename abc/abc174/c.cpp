#include <bits/stdc++.h>
using namespace std;

int main()
{
  int k;
  cin >> k;

  int64_t seven = 7;
  int ans = 1;
  vector<bool> mods(k);
  while (true)
  {
    if (seven % k == 0)
    {
      cout << ans << endl;
      exit(0);
    }
    if (mods.at(seven % k))
    {
      break;
    }
    mods.at(seven % k) = true;
    seven %= k;
    seven = seven * 10 + 7;
    ans++;
  }
  cout << -1 << endl;
}
