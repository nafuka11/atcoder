#include <bits/stdc++.h>
using namespace std;

int main()
{
  string S, T;
  cin >> S >> T;
  if (S == T.substr(0, S.size()))
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }
}
