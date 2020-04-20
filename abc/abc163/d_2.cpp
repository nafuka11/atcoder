// 尺取り法を使った解法
#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9+7;

int main()
{
  int N, K;
  cin >> N >> K;

  int64_t min_sum = 0;
  int64_t max_sum = 0;
  for (int i = 0; i < K; i++)
  {
    min_sum += i;
    min_sum %= MOD;
    max_sum += N - i;
    max_sum %= MOD;
  }

  int64_t ans = 0;
  for (int i = K; i <= N + 1; i++)
  {
    ans += max_sum - min_sum + 1;
    min_sum += i;
    max_sum += N - i;
    ans %= MOD;
    min_sum %= MOD;
    max_sum %= MOD;
  }
  if (ans < 0)
  {
    ans += MOD;
  }
  cout << ans << endl;
}
