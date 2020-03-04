#include <bits/stdc++.h>
using namespace std;

using t_r = tuple<string, int, int>;

bool compare(const t_r &l, const t_r &r)
{
  if (get<0>(l) != get<0>(r))
  {
    return get<0>(l) < get<0>(r);
  }
  return get<1>(l) > get<1>(r);
}

int main()
{
  int N;
  cin >> N;
  vector<t_r> restaurants(N);
  for (int i = 0; i < N; i++)
  {
    string s;
    int p;
    cin >> s >> p;
    restaurants.at(i) = make_tuple(s, p, i + 1);
  }
  sort(restaurants.begin(), restaurants.end(), compare);

  for (auto r : restaurants)
  {
    cout << get<2>(r) << endl;
  }
}
