#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N;
  cin >> N;
  pair<int, int> max_num;
  map<int, int> nums;
  for (int i = 0; i < N; i++)
  {
    int num;
    cin >> num;
    nums[num]++;
    if (max_num.second < nums[num])
    {
      max_num.second = nums[num];
      max_num.first = num;
    }
  }
  cout << max_num.first << ' ' << max_num.second << endl;
}
