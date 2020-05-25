#include <bits/stdc++.h>
using namespace std;

int main()
{
  int island_num;
  int people_sum = 0;
  cin >> island_num;
  vector<int> island(island_num);
  for (int i = 0; i < island_num; i++)
  {
    int people;
    cin >> people;
    island.at(i) = people;
    people_sum += people;
  }
  if (people_sum % island_num)
  {
    cout << -1 << endl;
    exit(0);
  }
  int people_avg = people_sum / island_num;
  int ans = 0;
  people_sum = 0;
  for (int i = 0; i < island_num; i++)
  {
    people_sum += island.at(i);
    if (people_sum != people_avg * (i + 1))
    {
      ans++;
    }
  }
  cout << ans << endl;
}
