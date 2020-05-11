// 参考: https://www.youtube.com/watch?v=ENSOy8u9K9I
// 基本方針:
//   (を+1, )を-1とした折れ線に見立てる
//   正しい括弧列であるには、
//     - 線が0で終わる
//     - 0未満にならない
//   必要がある
#include <bits/stdc++.h>
using namespace std;

bool can_join(vector<pair<int, int>> &brackets)
{
  int height = 0;
  for (pair<int, int> bracket : brackets)
  {
    int bottom = height + bracket.first;
    if (bottom < 0)
    {
      return false;
    }
    height += bracket.second;
  }
  return true;
}

int main()
{
  int bracket_num;
  cin >> bracket_num;
  // (左or右を始点とした最下点、最終的な高さ)のpair
  vector<pair<int, int>> l_brackets, r_brackets;
  int total_height = 0;
  // (を+, )を-として、+ならl、-ならrに格納する
  for (int i = 0; i < bracket_num; i++)
  {
    string s;
    cin >> s;
    int height = 0, bottom = 0;
    for (char c : s)
    {
      if (c == '(')
      {
        height++;
      }
      else
      {
        height--;
      }
      bottom = min(bottom, height);
    }
    if (height > 0)
    {
      l_brackets.emplace_back(bottom, height);
    }
    else
    {
      r_brackets.emplace_back(bottom - height, -height);
    }
    total_height += height;
  }
  sort(l_brackets.rbegin(), l_brackets.rend());
  sort(r_brackets.rbegin(), r_brackets.rend());
  if (can_join(l_brackets) && can_join(r_brackets) && total_height == 0)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }
}
