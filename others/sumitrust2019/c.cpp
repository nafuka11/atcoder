#include <bits/stdc++.h>
using namespace std;

int main()
{
  int X;
  cin >> X;
  int answer = 0;
  for (int i = 1; i <= 1000; i++)
  {
    if (i * 100 <= X && X <= 105 * i)
      answer = 1;
  }
  cout << answer << endl;
}
