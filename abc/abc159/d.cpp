#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<int> nums(N);
  vector<int> balls(N);
  for (int i = 0; i < N; i++)
  {
    cin >> balls.at(i);
    nums.at(balls.at(i) - 1)++;
  }
  int64_t ans = 0;
  for (int i = 0; i < N; i++)
  {
    ans += (int64_t)nums.at(i) * (nums.at(i) - 1) / 2;
  }
  for (int i = 0; i < N; i++)
  {
    int64_t a = ans - (nums.at(balls.at(i) - 1) - 1);
    cout << a << endl;
  }
}
