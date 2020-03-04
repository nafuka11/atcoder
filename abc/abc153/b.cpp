#include <bits/stdc++.h>
using namespace std;

int main()
{
  int H, N;
  cin >> H >> N;
  bool ans = false;
  for (int i = 0; i < N; i++)
  {
    int a;
    cin >> a;
    H -= a;
    if (H <= 0)
    {
      ans = true;
      break;
    }
  }
  cout << (ans ? "Yes" : "No") << endl;
}
