#include <bits/stdc++.h>
using namespace std;

int main()
{
  long long S;
  cin >> S;
  long long x3, y3;
  long long y2 = 1000000000;
  x3 = (S - 1) / y2 + 1;
  y3 = x3 * y2 - S;
  cout << "0 0 1 1000000000 " << x3 << " " << y3 << endl;
}
