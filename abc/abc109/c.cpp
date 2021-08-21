#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n_pos, start;
  cin >> n_pos >> start;
  vector<int> pos(n_pos);
  vector<int> diff(n_pos);
  for (size_t i = 0; i < n_pos; i++)
  {
    cin >> pos[i];
    diff[i] = abs(pos[i] - start);
  }
  int ans = diff[0];
  for (size_t i = 1; i < n_pos; i++)
  {
    ans = __gcd(ans, diff[i]);
  }
  cout << ans << endl;
}
