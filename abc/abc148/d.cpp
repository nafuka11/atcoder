#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N;
  cin >> N;
  int ans = 0;
  int current = 1;
  for (int i = 0; i < N; i++)
  {
    int num;
    cin >> num;
    if (num != current)
    {
      ans++;
    }
    else
    {
      current++;
    }
  }
  if (ans == N)
  {
    ans = -1;
  }
  cout << ans << endl;
}
