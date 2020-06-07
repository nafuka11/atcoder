#include <bits/stdc++.h>
using namespace std;

bool switched = false;

int main()
{
  int n, q;
  cin >> n >> q;
  vector<int> rows(n);
  vector<int> cols(n);
  for (int i = 0; i < n; i++)
  {
    rows.at(i) = i;
    cols.at(i) = i;
  }
  for (int i = 0; i < q; i++)
  {
    int type;
    cin >> type;
    if (type == 3)
    {
      switched = !switched;
      continue;
    }
    int a, b;
    cin >> a >> b;
    a--;
    b--;
    if (type == 1)
    {
      if (switched)
      {
        swap(cols.at(a), cols.at(b));
      }
      else
      {
        swap(rows.at(a), rows.at(b));
      }
    }
    if (type == 2)
    {
      if (switched)
      {
        swap(rows.at(a), rows.at(b));
      }
      else
      {
        swap(cols.at(a), cols.at(b));
      }
    }
    if (type == 4)
    {
      if (switched)
      {
        int64_t ans = (int64_t)rows.at(b) * n + cols.at(a);
        cout << ans << endl;
      }
      else
      {
        int64_t ans = (int64_t)rows.at(a) * n + cols.at(b);
        cout << ans << endl;
      }
    }
  }
}
