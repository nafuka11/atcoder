#include <bits/stdc++.h>
using namespace std;

int main()
{
  int town_num;
  int64_t move_num;
  cin >> town_num >> move_num;
  vector<int> towns(town_num);
  for (int i = 0; i < town_num; i++)
  {
    int num;
    cin >> num;
    towns.at(i) = num - 1;
  }
  deque<int> loop_towns;
  set<int> loop_set;
  int i = 0;
  while (move_num > 0)
  {
    if (loop_set.count(i))
    {
      while (loop_towns.front() != i)
      {
        loop_towns.pop_front();
      }
      break;
    }
    else
    {
      loop_set.insert(i);
      loop_towns.push_back(i);
      i = towns.at(i);
      move_num--;
    }
  }
  if (move_num == 0)
  {
    cout << (i + 1) << endl;
  }
  else
  {
    int ans = loop_towns.at(move_num % loop_towns.size());
    cout << (ans + 1) << endl;
  }
}
