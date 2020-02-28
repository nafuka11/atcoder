#include <bits/stdc++.h>
using namespace std;

int64_t get_lucas_number(int num)
{
  int64_t x = 2;
  int64_t y = 1;
  for (int i = 1; i < num; i++)
  {
    int64_t sum = x + y;
    x = y;
    y = sum;
  }
  return (y);
}

int main()
{
  int num;
  cin >> num;
  cout << get_lucas_number(num) << endl;
}
