#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N, K;
  cin >> N >> K;
  vector<int> H(N);
  for (int i = 0; i < N; i++)
  {
    cin >> H.at(i);
  }
  sort(H.begin(), H.end());

  int64_t ans = 0;
  for (int i = 0; i < (int)H.size() - K; i++)
  {
    ans += H.at(i);
  }
  cout << ans << endl;
}
