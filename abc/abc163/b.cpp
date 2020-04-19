#include <bits/stdc++.h>
using namespace std;

int main()
{
  int day, num_work;
  cin >> day >> num_work;
  for (int i = 0; i < num_work; i++)
  {
    int work;
    cin >> work;
    day -= work;
  }
  if (day < 0)
  {
    day = -1;
  }
  cout << day << endl;
}
