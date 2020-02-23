#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  int result = 1;

  for (int i = 0; i < S.size() / 2; i++)
  {
    if (S[i * 2 + 1] == '+')
    {
      result++;
    }
    else
    {
      result--;
    }
  }
  cout << result << endl;
}
