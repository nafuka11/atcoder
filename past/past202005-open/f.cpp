#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  vector<set<char>> lines(n, set<char>());
  for (int h = 0; h < n; h++)
  {
    for (int w = 0; w < n; w++)
    {
      char c;
      cin >> c;
      lines.at(h).insert(c);
    }
  }
  string ans(n, '.');
  for (int i = 0; i < n / 2; i++)
  {
    bool has_same = false;
    for (char c : lines.at(i))
    {
      if (lines.at(n - 1 - i).count(c))
      {
        has_same = true;
        ans.at(i) = c;
        ans.at(n - 1 - i) = c;
        break;
      }
    }
    if (!has_same)
    {
      cout << -1 << endl;
      exit(0);
    }
  }
  if (n % 2 == 1)
  {
    ans.at(n / 2) = *(lines.at(n / 2).begin());
  }
  cout << ans << endl;
}
