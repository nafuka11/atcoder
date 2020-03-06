#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N, M;
  cin >> N >> M;
  vector<pair<int, int>> ans(N);

  for (int i = 0; i < M; i++)
  {
    int p;
    string s;
    cin >> p >> s;
    if (s == "WA"s)
    {
      if (ans.at(p - 1).first == 0)
      {
        ans.at(p - 1).second++;
      }
    }
    else
    {
      ans.at(p - 1).first = 1;
    }
  }

  int ac = 0;
  int wa = 0;
  for (auto a : ans)
  {
    ac += a.first;
    if (a.first)
    {
      wa += a.second;
    }
  }
  cout << ac << ' ' << wa << endl;
}