#include <bits/stdc++.h>
using namespace std;

int main()
{
  int x, len;
  cin >> x >> len;
  if (len == 0)
  {
    cout << x << endl;
    exit(0);
  }
  vector<int> p(len);
  for (int i = 0; i < len; i++)
  {
    cin >> p.at(i);
  }
  sort(p.begin(), p.end());
  int ans = -100;
  int diff = 1000000000;
  for (int i = p.at(0) - 1; i <= p.at(p.size() - 1) + 1; i++)
  {
    if (find(p.begin(), p.end(), i) != p.end())
    {
      continue;
    }
    int now_diff = abs(x - i);
    if (now_diff < diff)
    {
      diff = now_diff;
      ans = i;
    }
  }
  cout << ans << endl;
}
