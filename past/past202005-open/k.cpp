#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N, Q;
  cin >> N >> Q;
  vector<int> under_container(N, -1);
  vector<int> top_desk(N);
  for (int i = 0; i < N; i++)
  {
    top_desk.at(i) = i;
  }
  for (int i = 0; i < Q; i++)
  {
    int f, t, x;
    cin >> f >> t >> x;
    f--;
    t--;
    x--;
    int tmp = top_desk.at(f);
    top_desk.at(f) = under_container.at(x);
    under_container.at(x) = top_desk.at(t);
    top_desk.at(t) = tmp;
  }
  vector<int> ans(N);
  for (int i = 0; i < N; i++)
  {
    int top = top_desk.at(i);
    while (top > -1)
    {
      ans.at(top) = i + 1;
      top = under_container.at(top);
    }
  }
  for (int n : ans)
  {
    cout << n << endl;
  }
}
