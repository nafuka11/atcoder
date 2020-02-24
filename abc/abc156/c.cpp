#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<int> X(N);
  for (int i = 0; i < N; i++)
  {
    cin >> X.at(i);
  }
  sort(X.begin(), X.end());
  int ans = numeric_limits<int>::max();
  for (int i = X.at(0); i <= X.at(X.size() - 1); i++)
  {
    int sum = 0;
    for (int x : X)
    {
      sum += (i - x) * (i - x);
    }
    ans = min(sum, ans);
  }
  cout << ans <<endl;
}