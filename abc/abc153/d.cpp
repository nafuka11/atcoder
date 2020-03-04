#include <bits/stdc++.h>
using namespace std;

int64_t calc_attack_count(int64_t hp)
{
  if (hp <= 1)
  {
    return 1;
  }
  return 1 + calc_attack_count(hp / 2) * 2;
}

int main()
{
  int64_t H;
  cin >> H;
  int64_t ans = 1;
  cout << calc_attack_count(H) << endl;
}
