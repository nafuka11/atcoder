#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, k;
  cin >> n >> k;
  vector<bool> snukes(n);
  for (int i = 0; i < k; i++)
  {
    int d;
    cin >> d;
    for (int j = 0; j < d; j++)
    {
      int a;
      cin >> a;
      snukes.at(a - 1) = true;
    }
  }
  int ans = 0;
  for (bool snuke : snukes)
  {
    if (!snuke)
    {
      ans++;
    }
  }
  cout << ans << endl;
}
