#include <bits/stdc++.h>
using namespace std;

int main()
{
  int nums_len, sum;
  cin >> nums_len >> sum;
  vector<int> nums(nums_len);
  for (int i = 0; i < nums_len; i++)
  {
    cin >> nums.at(i);
  }

  bool ans = false;
  for (int tmp = 0; tmp < (1 << 20); tmp++)
  {
    bitset<20> bits(tmp);
    int now_sum = 0;
    for (int i = 0; i < nums_len; i++)
    {
      if (bits.test(i))
      {
        now_sum += nums.at(i);
      }
    }
    if (now_sum == sum)
    {
      ans = true;
      break;
    }
  }
  cout << (ans ? "YES" : "NO") << endl;
}
