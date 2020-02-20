#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N;
  cin >> N;

  vector<int> a(N);
  vector<bool> pushed(N);
  for (int i = 0; i < N; i++)
  {
    cin >> a.at(i);
  }
  int i = 0;
  int result = 1;
  while (!pushed.at(i) && a.at(i) != 2)
  {
    pushed.at(i) = true;
    i = a.at(i) - 1;
    result++;
  }
  if (a.at(i) != 2)
  {
    cout << -1 <<endl;
  }
  else
  {
    cout << result << endl;
  }
}