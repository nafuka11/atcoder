#include <bits/stdc++.h>
using namespace std;

int main()
{
  int64_t N, A, B;
  cin >> N >> A >> B;

  int64_t ans = N / (A + B) * A + min(N % (A + B), A);
  cout << ans << endl;
}
