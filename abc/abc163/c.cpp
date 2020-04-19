#include <bits/stdc++.h>
using namespace std;

int main()
{
  int num_employee;
  cin >> num_employee;
  vector<int> employees(num_employee);
  for (int i = 0; i < num_employee - 1; i++)
  {
    int num_boss;
    cin >> num_boss;
    employees.at(num_boss - 1)++;
  }
  for (auto employee : employees)
  {
    cout << employee << endl;
  }
}
