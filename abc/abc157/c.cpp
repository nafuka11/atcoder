#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N, M;
  cin >> N >> M;
  vector<int> d_index(M);
  vector<int> d_value(M);
  for (int i = 0; i < M; i++)
  {
    cin >> d_index.at(i) >> d_value.at(i);
  }
  string ans = string(N, '.');
  for (int i = 0; i < M; i++)
  {
    if (ans.at(d_index.at(i) - 1) != '.' && ans.at(d_index.at(i) - 1) != d_value.at(i) + '0')
    {
      ans = "00";
      break;
    }
    ans.at(d_index.at(i) - 1) = d_value.at(i) + '0';
  }
  if (ans.at(0) == '.' && ans.size() > 1)
  {
    ans.at(0) = '1';
  }
  for (int i = 0; i < ans.size(); i++)
  {
    if (ans.at(i) == '.')
    {
      ans.at(i) = '0';
    }
  }
  if (ans.size() > 1 && ans.at(0) == '0')
  {
    cout << -1 << endl;
  }
  else
  {
    cout << ans << endl;
  }
}
