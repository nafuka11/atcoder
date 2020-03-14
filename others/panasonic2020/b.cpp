#include <bits/stdc++.h>
using namespace std;

int main()
{
  int64_t H, W;
  cin >> H >> W;
  int64_t ans = (H * W + 1) / 2;
  if (H == 1 || W == 1)
  {
    ans = 1;
  }
  cout << ans << endl;
}
