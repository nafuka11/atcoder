#include <bits/stdc++.h>
using namespace std;

int main()
{
  int num, dist;
  cin >> num >> dist;
  int ans = 0;
  for (int i = 0; i < num; i++)
  {
    int64_t x, y;
    cin >> x >> y;
    if (x * x + y * y <= (int64_t)dist * dist)
    {
      ans++;
    }
  }
  cout << ans << endl;
}
