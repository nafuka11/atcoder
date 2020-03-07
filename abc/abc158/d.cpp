#include <bits/stdc++.h>
using namespace std;

void query(string &l, string &r)
{
  int T;
  cin >> T;
  if (T == 1)
  {
    swap(l, r);
    return;
  }
  int F;
  char c;
  cin >> F >> c;
  if (F == 1)
  {
    l += c;
  }
  else
  {
    r += c;
  }
}

void show_ans(string &l, string &r)
{
  reverse(l.begin(), l.end());
  cout << l << r << endl;
}

int main()
{
  string s_l, s_r;
  int Q;
  cin >> s_r >> Q;
  for (int i = 0; i < Q; i++)
  {
    query(s_l, s_r);
  }
  show_ans(s_l, s_r);
}
