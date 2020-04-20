// 累積和を使った方法
#include <bits/stdc++.h>
using namespace std;

const int64_t MOD = 1000000007;

int main()
{
  int N, K;
  cin >> N >> K;
  vector<int64_t> sums(N + 1);
  sums.at(0) = 0;
  for (int i = 1; i < sums.size(); i++)
  {
    sums.at(i) = (sums.at(i - 1) + i) % MOD;
  }

  int64_t ans = 0;
  for (int i = K - 1; i < N + 1; i++)
  {
    int64_t sum_max = sums.at(N) - sums.at(max(N - i - 1, 0));
    int64_t sum_min = sums.at(i);
    ans += sum_max - sum_min + 1;
    ans %= MOD;
  }
  // オーバーフローして負数になる場合はMODを足す
  if (ans < 0)
  {
    ans += MOD;
  }
  cout << ans << endl;
}
