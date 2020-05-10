#include <bits/stdc++.h>
using namespace std;

int main()
{
  int one, zero, minus, cards;
  cin >> one >> zero >> minus >> cards;
  int64_t ans = 0;
  ans += (cards < one ? cards : one);
  cards -= one;
  if (cards > 0)
  {
    cards -= zero;
  }
  if (cards > 0)
  {
    ans -= cards;
  }
  cout << ans << endl;
}
