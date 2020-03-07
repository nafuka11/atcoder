#include <bits/stdc++.h>
using namespace std;

void query(deque<char> &l, deque<char> &r, bool &reversed, bool &l_reversed, bool &r_reversed)
{
  int T;
  cin >> T;
  if (T == 1)
  {
    reversed = !reversed;
    swap(l, r);
    swap(l_reversed, r_reversed);
    if (l.size() > 1)
    {
      l_reversed = !l_reversed;
    }
    if (r.size() > 1)
    {
      r_reversed = !r_reversed;
    }
  }
  else
  {
    int F;
    cin >> F;
    char c;
    cin >> c;
    if (F == 1)
    {
      if (l_reversed)
      {
        l.push_back(c);
      }
      else
      {
        l.push_front(c);
      }
    }
    else
    {
      if (r_reversed)
      {
        r.push_front(c);
      }
      else
      {
        r.push_back(c);
      }
    }
  }
}

void show_ans(deque<char> &l, deque<char> &r, string &S, bool reversed, bool l_reversed, bool r_reversed)
{
  if (l_reversed)
  {
    for (int i = 0; i < l.size(); i++)
    {
      cout << l.at(l.size() - i - 1);
    }
  }
  else
  {
    for (int i = 0; i < l.size(); i++)
    {
      cout << l.at(i);
    }
  }
  if (reversed)
  {
    reverse(S.begin(), S.end());
  }
  cout << S;
  if (r_reversed)
  {
    for (int i = 0; i < r.size(); i++)
    {
      cout << r.at(r.size() - i - 1);
    }
  }
  else
  {
    for (int i = 0; i < r.size(); i++)
    {
      cout << r.at(i);
    }
  }
  cout << endl;
}

int main()
{
  string S;
  int Q;
  cin >> S >> Q;
  bool reversed = false;
  bool l_reversed = false;
  bool r_reversed = false;
  deque<char> l, r;
  for (int i = 0; i < Q; i++)
  {
    query(l, r, reversed, l_reversed, r_reversed);
  }
  show_ans(l, r, S, reversed, l_reversed, r_reversed);
}