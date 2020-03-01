#include <bits/stdc++.h>
using namespace std;

void fetch_card(const int card[][3], int value, bool hit[][3])
{
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      if (card[i][j] == value)
      {
        hit[i][j] = true;
      }
    }
  }
}

bool is_bingo(const bool hit[][3])
{
  for (int i = 0; i < 3; i++)
  {
    if (hit[i][0] && hit[i][1] && hit[i][2])
    {
      return true;
    }
    if (hit[0][i] && hit[1][i] && hit[2][i])
    {
      return true;
    }
  }
  if (hit[0][0] && hit[1][1] && hit[2][2])
  {
    return true;
  }
  if (hit[0][2] && hit[1][1] && hit[2][0])
  {
    return true;
  }
  return false;
}

int main()
{
  int card[3][3] = {{}};
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      cin >> card[i][j];
    }
  }
  int n;
  cin >> n;
  bool hit[3][3] = {{}};
  for (int i = 0; i < n; i++)
  {
    int value;
    cin >> value;
    fetch_card(card, value, hit);
  }
  if (is_bingo(hit))
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }
}
