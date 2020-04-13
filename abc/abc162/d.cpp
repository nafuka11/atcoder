#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N;
  string S;
  cin >> N >> S;
  int64_t r = 0, g = 0, b = 0;
  for (int i = 0; i < S.size(); i++)
  {
    if (S.at(i) == 'R')
    {
      r++;
    }
    if (S.at(i) == 'G')
    {
      g++;
    }
    if (S.at(i) == 'B')
    {
      b++;
    }
  }
  int64_t ans = r * g * b;
  for (int i = 0; i < N - 2; i++)
  {
    for (int j = i + 1; j < N - 1; j++)
    {
      int k = 2 * j - i;
      if (S.at(i) == S.at(j))
      {
        continue;
      }
      if (k < N && (S.at(j) != S.at(k) && S.at(k) != S.at(i)))
      {
        ans--;
      }
    }
  }
  cout << ans << endl;
}
