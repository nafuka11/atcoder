#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s, t;
  cin >> s >> t;

  int a, b;
  cin >> a >> b;

  string u;
  cin >> u;
  if (u == s)
  {
    a--;
  }
  else
  {
    b--;
  }
  cout << a << ' ' << b << endl;
}
