#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> data(5);
  for (int i = 0; i < 5; i++) {
    cin >> data.at(i);
  }

  bool eq = false;
  for (int i = 0; i < data.size() - 1; i++)
  {
    if (data.at(i) == data.at(i + 1))
    {
      eq = true;
      break;
    }
  }
  if (eq)
  {
    cout << "YES" << endl;
  }
  else
  {
    cout << "NO" << endl;
  }
}
