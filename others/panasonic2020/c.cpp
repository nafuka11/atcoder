#include <bits/stdc++.h>
using namespace std;

int main()
{
  int64_t a, b, c;
  cin >> a >> b >> c;
  int64_t d = c - a - b;
  bool ans = sqrtl(a * b) * 2 < d;
  cout << (ans ? "Yes": "No") << endl;
}
