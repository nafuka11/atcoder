#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t_hp, t_at, a_hp, a_at;
  cin >> t_hp >> t_at >> a_hp >> a_at;
  bool t_turn = true;
  while (t_hp > 0 && a_hp > 0)
  {
    if (t_turn)
    {
      a_hp -= t_at;
    }
    else
    {
      t_hp -= a_at;
    }
    t_turn = !t_turn;
  }
  cout << (a_hp <= 0 ? "Yes" : "No") << endl;
}
