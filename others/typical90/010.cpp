#include <bits/stdc++.h>
using namespace std;

int main()
{
  int num_student;
  cin >> num_student;
  vector<vector<int>> sum_score(2, vector<int>(num_student));
  for (int i = 0; i < num_student; i++)
  {
    int num_class;
    cin >> num_class;
    cin >> sum_score.at(num_class - 1).at(i);
    if (i > 0)
    {
      sum_score.at(0).at(i) += sum_score.at(0).at(i - 1);
      sum_score.at(1).at(i) += sum_score.at(1).at(i - 1);
    }
  }

  int num_query;
  cin >> num_query;
  for (int i = 0; i < num_query; i++)
  {
    int left, right;
    cin >> left >> right;
    int ans[2];
    for (int i = 0; i < 2; i++)
    {
      ans[i] = sum_score.at(i).at(right - 1);
      if (left >= 2)
        ans[i] -= sum_score.at(i).at(left - 2);
    }
    cout << ans[0] << " " << ans[1] << endl;
  }
}
