#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N;
  cin >> N;
  int min_p = N + 1;
  int ans = 0;
  for (int i = 0; i < N; i++)
  {
    int p;
    cin >> p;
    if (min_p > p)
    {
      ans++;
    }
    min_p = min(min_p, p);
  }
  cout << ans << endl;
}
