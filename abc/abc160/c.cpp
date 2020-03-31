#include <bits/stdc++.h>
using namespace std;

int main()
{
  int K, N;
  cin >> K >> N;
  vector<int> A(N);
  for (int i = 0; i < N; i++)
  {
    cin >> A.at(i);
  }
  sort(A.begin(), A.end());

  int ans = 1000000000;
  for (int i = 0; i < N; i++)
  {
    int start = A.at(i);
    int end = A.at((N - 1 + i) % N);
    if (end < start)
    {
      end += K;
    }
    ans = min(ans, end - start);
  }

  cout << ans << endl;
}
