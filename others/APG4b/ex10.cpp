#include <bits/stdc++.h>
using namespace std;

void printScore(string name, int score)
{
  cout << name << ":";
  while (score)
  {
    cout << "]";
    score--;
  }
  cout << endl;
}

int main() {
  int A, B;
  cin >> A >> B;

  printScore("A", A);
  printScore("B", B);
}
