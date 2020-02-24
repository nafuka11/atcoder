#include <bits/stdc++.h>
using namespace std;

void search_index(vector<string> &blocks, int &h, int &w, char c)
{
  for (int i = 0; i < blocks.size(); i++)
  {
    for (int j = 0; j < blocks.at(i).size(); j++)
    {
      if (blocks.at(i).at(j) == c)
      {
        h = i;
        w = j;
        return;
      }
    }
  }
}

bool can_move(vector<string> &blocks, int h, int w)
{
  if (h < 0 || blocks.size() <= h || w < 0 || blocks.at(0).size() <= w)
  {
    return false;
  }
  return (blocks.at(h).at(w) == '.' || blocks.at(h).at(w) == 'g');
}

bool solve(vector<string> &blocks, int start_h, int start_w)
{
  if (blocks.at(start_h).at(start_w) == 'g')
  {
    return true;
  }
  blocks.at(start_h).at(start_w) = '*';
  bool result = false;
  vector<int> steps = {-1, 1};
  for (int i = 0; i < steps.size(); i++)
  {
    if (can_move(blocks, start_h + steps.at(i), start_w))
    {
      result = solve(blocks, start_h + steps.at(i), start_w);
      if (result)
      {
        return result;
      }
    }
  }
  for (int i = 0; i < steps.size(); i++)
  {
    if (can_move(blocks, start_h, start_w + steps.at(i)))
    {
      result = solve(blocks, start_h, start_w + steps.at(i));
      if (result)
      {
        return result;
      }
    }
  }
  return result;
}

int main()
{
  int H, W;
  int start_h, start_w;

  cin >> H >> W;
  vector<string> blocks(H);
  for (int h = 0; h < H; h++)
  {
    cin >> blocks.at(h);
  }
  search_index(blocks, start_h, start_w, 's');
  if (solve(blocks, start_h, start_w))
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }
}