#include <bits/stdc++.h>
using namespace std;

const int INF = 1000000000;

int main()
{
  int hurdle_num, goal;
  cin >> hurdle_num >> goal;
  vector<bool> hurdles(goal + 1);
  for (int i = 0; i < hurdle_num; i++)
  {
    int num;
    cin >> num;
    hurdles.at(num) = true;
  }
  int t1, t2, t3;
  cin >> t1 >> t2 >> t3;
  vector<int> dp(goal + 1, INF);
  dp.at(0) = 0;
  for (int i = 0; i < goal; i++)
  {
    dp.at(i+1) = min(dp.at(i + 1), dp.at(i) + t1 + t3 * hurdles.at(i + 1));
    if (i + 2 <= goal)
    {
      dp.at(i + 2) = min(dp.at(i + 2), dp.at(i) + t1 + t2 + t3 * hurdles.at(i + 2));
    }
    if (i + 4 <= goal)
    {
      dp.at(i + 4) = min(dp.at(i + 4), dp.at(i) + t1 + t2 * 3 + t3 * hurdles.at(i + 4));
    }
  }
  int ans = dp.back();
  ans = min(ans, dp.at(goal - 1) + (t1 + t2) / 2);
  if (goal >= 2)
  {
    ans = min(ans, dp.at(goal - 2) + (t1 + t2) / 2 + t2);
  }
  if (goal >= 3)
  {
    ans = min(ans, dp.at(goal - 3) + (t1 + t2) / 2 + t2 * 2);
  }
  cout << ans << endl;
}
