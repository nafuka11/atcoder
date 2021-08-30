#include <bits/stdc++.h>
using namespace std;

bool is_valid_answer(int piece_len, int len, int count, vector<int> &cut)
{
  int n_piece = 0;
  int pre_piece_len = 0;
  for (int i = 0; i < cut.size(); i++)
  {
    if (cut[i] - pre_piece_len >= piece_len)
    {
      n_piece++;
      pre_piece_len = cut[i];
    }
  }
  if (len - pre_piece_len >= piece_len)
  {
    n_piece++;
  }
  return n_piece >= count + 1;
}

int main()
{
  int len, n_cut, count;
  cin >> n_cut >> len >> count;
  vector<int> cut(n_cut);

  for (int i = 0; i < n_cut; i++)
  {
    cin >> cut[i];
  }

  int left = 0, right = len + 1;
  while (right - left > 1)
  {
    int mid = left + (right - left) / 2;
    if (is_valid_answer(mid, len, count, cut))
    {
      left = mid;
    }
    else
    {
      right = mid;
    }
  }
  cout << left << endl;
}
