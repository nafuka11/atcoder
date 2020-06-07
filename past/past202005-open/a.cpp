#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s, t;
  cin >> s >> t;

  if (s == t)
  {
    cout << "same" << endl;
    exit(0);
  }

  transform(s.begin(), s.end(), s.begin(), ::tolower);
  transform(t.begin(), t.end(), t.begin(), ::tolower);
  if (s == t)
  {
    cout << "case-insensitive" << endl;
  }
  else
  {
    cout << "different" << endl;
  }
}
