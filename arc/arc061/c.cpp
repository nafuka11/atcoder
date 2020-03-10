#include <bits/stdc++.h>
using namespace std;

int64_t calc_expression(string &S, bitset<10> &plus)
{
  int64_t ans = 0;
  int64_t num = 0;
  for (int i = 0; i < S.size(); i++)
  {
    num *= 10;
    num += S.at(i) - '0';
    if (i < S.size() - 1 && plus.test(i))
    {
      ans += num;
      num = 0;
    }
  }
  return ans + num;
}

int main()
{
  string S;
  cin >> S;
  int64_t ans = 0;
  for (int tmp = 0; tmp < (1 << S.size() - 1); tmp++)
  {
    bitset<10> plus(tmp);
    ans += calc_expression(S, plus);
  }
  cout << ans << endl;
}
