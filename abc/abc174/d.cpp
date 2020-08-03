#include <bits/stdc++.h>
using namespace std;

int main()
{
  // RRRRWWWWW のような状態に至る必要がある
  // 一番左のRより前のWをRにする
  // 一番右のRをWにする
  // RとR, WとWは入れ替える必要がない
  //
  int n;
  string c;
  cin >> n >> c;
  int ans_r = 0, ans_w = 0;
  int count_r = 0;
  for (int i = 0; i < n; i++)
  {
    if (c.at(i) == 'R')
    {
      count_r++;
    }
  }
  for (int i = 0; i < count_r; i++)
  {
    if (c.at(i) == 'W')
    {
      ans_w++;
    }
  }
  for (int i = count_r; i < n; i++)
  {
    if (c.at(i) == 'R')
    {
      ans_r++;
    }
  }
  cout << (min(ans_w, ans_r)) << endl;
}
