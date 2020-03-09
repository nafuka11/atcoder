#include <bits/stdc++.h>
using namespace std;

int main()
{
  int A, B, M;
  cin >> A >> B >> M;
  vector<int> a(A);
  vector<int> b(B);
  int min_a = 100001;
  int min_b = 100001;
  for (int i = 0; i < A; i++)
  {
    cin >> a.at(i);
    min_a = min(min_a, a.at(i));
  }
  for (int i = 0; i < B; i++)
  {
    cin >> b.at(i);
    min_b = min(min_b, b.at(i));
  }

  int ans = min_a + min_b;
  for (int i = 0; i < M; i++)
  {
    int x, y, c;
    cin >> x >> y >> c;
    ans = min(ans, a.at(x - 1) + b.at(y - 1) - c);
  }
  cout << ans << endl;
}