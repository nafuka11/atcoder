#include <bits/stdc++.h>
using namespace std;

int main()
{
  int len;
  cin >> len;
  vector<int> nums(len);
  for (int i = 0; i < len; i++)
  {
    cin >> nums.at(i);
  }
  sort(nums.begin(), nums.end());
  vector<int> dp(nums.at(len - 1) + 1);
  int ans = 0;
  for (int n : nums)
  {
    if (dp.at(n))
    {
      dp.at(n)++;
      continue;
    }
    for (int i = n; i < dp.size(); i += n)
    {
      dp.at(i)++;
    }
  }
  for (int n : nums)
  {
    if (dp.at(n) == 1)
    {
      ans++;
    }
  }
  cout << ans << endl;
}
