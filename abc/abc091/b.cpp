#include <bits/stdc++.h>
using namespace std;

int calcMoney(string word, vector<string> s, vector<string> t)
{
  int money = 0;
  for (int i = 0; i < s.size(); i++)
  {
    if (s.at(i) == word)
    {
      money++;
    }
  }
  for (int i = 0; i < t.size(); i++)
  {
    if (t.at(i) == word)
    {
      money--;
    }
  }
  return money;
}

int main()
{
  int N, M;

  cin >> N;
  vector <string> s(N);
  for (int i = 0; i < N; i++)
  {
    cin >> s.at(i);
  }
  cin >> M;
  vector <string> t(M);
  for (int i = 0; i < M; i++)
  {
    cin >> t.at(i);
  }

  int result = 0;
  for (int i = 0; i < s.size(); i++)
  {
    result = max(calcMoney(s.at(i), s, t), result);
  }
  cout << result << endl;
}