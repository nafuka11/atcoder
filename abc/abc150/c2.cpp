// next_permutationを使う方法
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N;
  cin >> N;

  vector<int> P(N);
  vector<int> Q(N);
  vector<int> array(N);
  for (int i = 0; i < N; i++)
  {
    cin >> P.at(i);
  }
  for (int i = 0; i < N; i++)
  {
    cin >> Q.at(i);
  }
  for (int i = 0; i < N; i++)
  {
    array.at(i) = i + 1;
  }
  int p_i = 0;
  int q_i = 0;
  int i = 0;
  do
  {
    if (P == array)
    {
      p_i = i;
    }
    if (Q == array)
    {
      q_i = i;
    }
    i++;
  }
  while (next_permutation(array.begin(), array.end()));
  cout << abs(p_i - q_i) << endl;
}
