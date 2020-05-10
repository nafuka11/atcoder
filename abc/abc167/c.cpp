#include <bits/stdc++.h>
using namespace std;

const int MAX_BOOK = 12;

bool can_reach_goal(vector<int> &algos, int goal)
{
  for (int i = 0; i < algos.size(); i++)
  {
    if (algos.at(i) < goal)
    {
      return false;
    }
  }
  return true;
}

int calc_money(bitset<MAX_BOOK> &buy_book, vector<vector<int>> &books, int algo_num, int goal)
{
  int money = 0;
  vector<int> algos = vector<int>(algo_num);
  for (int i = 0; i < books.size(); i++)
  {
    if (!buy_book.test(i))
    {
      continue;
    }
    money += books.at(i).at(0);
    for (int algo = 0; algo < algo_num; algo++)
    {
      algos.at(algo) += books.at(i).at(1 + algo);
    }
  }
  if (can_reach_goal(algos, goal))
  {
    return money;
  }
  return -1;
}

int main()
{
  int book_num, algo_num, goal;
  cin >> book_num >> algo_num >> goal;
  vector<vector<int>> books(book_num, vector<int>(algo_num + 1));
  for (int i = 0; i < book_num; i++)
  {
    for (int j = 0; j < algo_num + 1; j++)
    {
      cin >> books.at(i).at(j);
    }
  }

  int ans = 1000000000;
  for (int i = 0; i < (1 << book_num); i++)
  {
    bitset<MAX_BOOK> buy_book(i);
    int tmp_ans = calc_money(buy_book, books, algo_num, goal);
    if (tmp_ans != -1)
    {
      ans = min(ans, tmp_ans);
    }
  }
  if (ans == 1000000000)
  {
    ans = -1;
  }
  cout << ans << endl;
}
