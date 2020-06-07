#include <bits/stdc++.h>
using namespace std;

bool is_large = false;
const int64_t mod = 1000000000;
const double mod_sqrt = sqrt(mod);

int64_t pow(int64_t n, int64_t p, int64_t m)
{
  if (p == 0)
  {
    return 1;
  }
  if (p % 2 == 0)
  {
    int64_t t = pow(n, p/2, m);
    if (t > mod_sqrt)
    {
      is_large = true;
    }
    return t * t % m;
  }
  return n * pow(n, p-1, m);
}

int main()
{
  int64_t a, r, n;
  cin >> a >> r >> n;
  int64_t num = a * pow(r, n - 1, mod);
  if (num > mod || is_large)
  {
    cout << "large" << endl;
  }
  else
  {
    cout << num << endl;
  }
}
