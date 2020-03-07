#include <bits/stdc++.h>
using namespace std;

int MAX_PRICE = 100 / 0.08;

int main()
{
  int A, B;
  cin >> A >> B;
  int ans = -1;
  for (int i = 1; i <= MAX_PRICE; i++)
  {
    if (floor(i * 0.08) == A && floor(i * 0.10) == B)
    {
      ans = i;
      break;
    }
  }
  cout << ans << endl;
}
