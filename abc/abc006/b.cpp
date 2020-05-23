#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 1000000;
const int DIV = 10007;
vector<int> memo(MAX_N);

int get_memo(int n)
{
  if (n <= 2)
  {
    return memo.at(n);
  }
  else
  {
    return (memo.at(n - 1) + memo.at(n - 2) + memo.at(n - 3)) % DIV;
  }
}

void set_memo(int n)
{
  if (n >= 2)
  {
    memo.at(2) = 1;
  }
  for (int i = 3; i < n; i++)
  {
    memo.at(i) = get_memo(i);
  }
}

int main()
{
  int n;
  cin >> n;
  n--;
  set_memo(n);
  cout << get_memo(n) << endl;
}
