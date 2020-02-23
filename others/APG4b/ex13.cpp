#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  int sum = 0;
  for (int i = 0; i < N; i++)
  {
    cin >> A.at(i);
    sum += A.at(i);
  }
  for (int i = 0; i < N; i++)
  {
    cout << abs(sum / N - A.at(i)) << endl;
  }
}
