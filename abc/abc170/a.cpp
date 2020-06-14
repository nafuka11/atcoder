#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<int> x(5);
  int ans = -1;
  for (int i = 0; i < x.size(); i++)
  {
    cin >> x.at(i);
    if (x.at(i) == 0)
    {
      ans = i + 1;
    }
  }
  cout << ans << endl;
}
