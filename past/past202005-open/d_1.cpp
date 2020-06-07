#include <bits/stdc++.h>
using namespace std;

const int HEIGHT = 5;
const int WIDTH = 3;

int fetch_number(int digit, vector<string> &lines)
{
  int pos = digit * 4 + 1;
  int cells = 0;
  int num = -1;
  for (int h = 0; h < HEIGHT; h++)
  {
    for (int w = 0; w < WIDTH; w++)
    {
      if (lines.at(h).at(pos + w) != '#')
      {
        continue;
      }
      cells++;
    }
  }
  switch (cells)
  {
  case 7:
    return 7;
  case 8:
    return 1;
  case 9:
    return 4;
  case 13:
    return 8;
  case 11:
    if (lines.at(3).at(pos + 0) == '#')
    {
      return 2;
    }
    if (lines.at(1).at(pos + 0) == '#')
    {
      return 5;
    }
    return 3;
  default:
    if (lines.at(2).at(pos + 1) == '.')
    {
      return 0;
    }
    if (lines.at(1).at(pos + 2) == '.')
    {
      return 6;
    }
    return 9;
  }
}

int main()
{
  int n;
  cin >> n;
  vector<string> lines(n);
  for (int i = 0; i < HEIGHT; i++)
  {
    cin >> lines.at(i);
  }
  for (int i = 0; i < n; i++)
  {
    cout << fetch_number(i, lines);
  }
  cout << endl;
}
