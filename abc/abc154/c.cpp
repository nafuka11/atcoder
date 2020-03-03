#include <bits/stdc++.h>
using namespace std;

int main()
{
  set<int> a;
  int n;
  cin >> n;
  bool ans = true;
  for (int i = 0; i < n; i++)
  {
    int num;
    cin >> num;
    if (a.find(num) == a.end())
    {
      a.insert(num);
    }
    else
    {
      ans = false;
      break;
    }
  }
  cout << (ans ? "YES" : "NO") << endl;
}
