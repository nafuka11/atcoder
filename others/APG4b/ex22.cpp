#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N;
  cin >> N;

  vector<pair<int, int>> pairs(N);
  for (int i = 0; i < N; i++)
  {
    int a, b;
    cin >> a >> b;
    pairs.at(i) = make_pair(b, a);
  }
  sort(pairs.begin(), pairs.end());

  for (auto p : pairs)
  {
    cout << p.second << ' ' << p.first << endl;
  }
}
