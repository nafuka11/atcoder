// 入力例1から数字をパース
#include <bits/stdc++.h>
using namespace std;

const int HEIGHT = 5;
const int WIDTH = 4;
const string DIGITS[] = {
  ".###..#..###.###.#.#.###.###.###.###.###.",
  ".#.#.##....#...#.#.#.#...#.....#.#.#.#.#.",
  ".#.#..#..###.###.###.###.###...#.###.###.",
  ".#.#..#..#.....#...#...#.#.#...#.#.#...#.",
  ".###.###.###.###...#.###.###...#.###.###.",
};


int fetch_number(int digit, vector<string> &lines)
{
  for (int n = 0; n < 10; n++)
  {
    bool is_same = true;
    for (int h = 0; h < HEIGHT; h++)
    {
      for (int w = 0; w < WIDTH; w++)
      {
        if (lines.at(h).at(digit * WIDTH + w) != DIGITS[h][n * WIDTH + w])
        {
          is_same = false;
          break;
        }
      }
      if (!is_same)
      {
        break;
      }
    }
    if (is_same)
    {
      return n;
    }
  }
  return -1;
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
