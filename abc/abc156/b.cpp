#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N, K;
  cin >> N >> K;
  int digit = 0;
  while (N > 0)
  {
    N /= K;
    digit++;
  }
  cout << digit << endl;
}