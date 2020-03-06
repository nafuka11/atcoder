#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N, K, M;
  cin >> N >> K >> M;
  int sum = N * M;
  for (int i = 0; i < N - 1; i++)
  {
    int a;
    cin >> a;
    sum -= a;
  }

  int ans;
  if (sum > K)
  {
    ans = -1;
  }
  else
  {
    ans = max(sum, 0);
  }
  cout << ans << endl;
}
