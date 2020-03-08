#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  map<string, int> polls;
  for (int i = 0; i < n; i++)
  {
    string s;
    cin >> s;
    polls[s]++;
  }
  int max_poll = 0;
  for (auto p : polls)
  {
    max_poll = max(p.second, max_poll);
  }
  for (auto p : polls)
  {
    if (p.second == max_poll)
    {
      cout << p.first << endl;
    }
  }
}
