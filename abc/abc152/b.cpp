#include <bits/stdc++.h>
using namespace std;

int main()
{
  int a, b;
  cin >> a >> b;
  cout << (a < b ? string(b, a + '0') : string(a, b + '0')) << endl;
}
