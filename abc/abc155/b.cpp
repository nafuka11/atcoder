#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  bool ans = true;
  for (int i = 0; i < n; i++)
  {
    int a;
    cin >> a;
    if (a % 2 == 0 && (a % 3 && a % 5))
    {
      ans = false;
      break;
    }
  }
  if (ans)
  {
    cout << "APPROVED" << endl;
  }
  else
  {
    cout << "DENIED" << endl;
  }
}
