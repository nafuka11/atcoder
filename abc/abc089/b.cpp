#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N;
  cin >> N;

  int y = 0;

  for (int i = 0; i < N; i++)
  {
    char S;
    cin >> S;
    if (S == 'Y')
    {
      y = 1;
      break;
    }
  }
  if (y)
  {
    cout << "Four" << endl;
  }
  else
  {
    cout << "Three" << endl;
  }
}