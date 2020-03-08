// 深さ優先探索で順列を生成する方法
#include <bits/stdc++.h>
using namespace std;

void get_dict(int n, vector<int> nums, vector<vector<int>> &dict)
{
  if (nums.size() == n)
  {
    dict.push_back(nums);
    return;
  }
  for (int i = 1; i <= n; i++)
  {
    bool contain = false;
    for (int j = 0; j < nums.size(); j++)
    {
      if (i == nums.at(j))
      {
        contain = true;
        break;
      }
    }
    if (!contain)
    {
      nums.push_back(i);
      get_dict(n, nums, dict);
      nums.pop_back();
    }
  }
}

int main()
{
  int N;
  cin >> N;

  vector<int> P(N);
  vector<int> Q(N);
  for (int i = 0; i < N; i++)
  {
    cin >> P.at(i);
  }
  for (int i = 0; i < N; i++)
  {
    cin >> Q.at(i);
  }

  vector<vector<int>> dict;
  vector<int> nums;
  get_dict(N, nums, dict);

  int p_i = 0;
  int q_i = 0;
  for (int i = 0; i < dict.size(); i++)
  {
    if (P == dict.at(i))
    {
      p_i = i;
    }
    if (Q == dict.at(i))
    {
      q_i = i;
    }
  }
  cout << abs(p_i - q_i) << endl;
}
