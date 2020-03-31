#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N, X, Y;
  cin >> N >> X >> Y;
  vector<int> ans(N - 1);
  for (int i = 1; i <= N; i++)
  {
    for (int j = i + 1; j <= N; j++)
    {
      int dist = min(j - i, abs(X - i) + abs(Y - j) + 1);
      ans.at(dist - 1) += 1;
    }
  }

  for (int i = 0; i < ans.size(); i++)
  {
    cout << ans.at(i) << endl;
  }
}
