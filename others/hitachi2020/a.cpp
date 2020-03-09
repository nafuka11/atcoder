#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s;
  cin >> s;
  bool ans = true;
  if (s.size() % 2 == 1)
  {
    cout << "No" << endl;
    return 0;
  }
  for (int i = 0; i < s.size(); i++)
  {
    if (i % 2)
    {
      if (s.at(i) != 'i')
      {
        ans = false;
        break;
      }
    }
    else
    {
      if (s.at(i) != 'h')
      {
        ans = false;
        break;
      }
    }
  }
  cout << (ans ? "Yes" : "No") << endl;
}
