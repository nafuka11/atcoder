#include <bits/stdc++.h>
using namespace std;

bool is_prime(int n)
{
  bool ans = true;
  for (int i = 2; i <= sqrt(n); i++)
  {
    if (n % i == 0)
    {
      ans = false;
      break;
    }
  }
  return ans;
}

int main()
{
  int x;
  cin >> x;
  while (true)
  {
    if (is_prime(x))
    {
      cout << x << endl;
      break;
    }
    x++;
  }
}
