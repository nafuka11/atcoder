#include <bits/stdc++.h>
using namespace std;

int main()
{
  int num;
  cin >> num;
  set<string> prices = set<string>();
  for (int i = 0; i < num; i++)
  {
    string s;
    cin >> s;
    prices.insert(s);
  }
  cout << prices.size() << endl;
}
