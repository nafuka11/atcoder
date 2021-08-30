#include <bits/stdc++.h>
using namespace std;

int main()
{
  int height, width;
  cin >> height >> width;
  vector<int> sum_row(height);
  vector<int> sum_col(width);
  vector<vector<int>> rowcol(height, vector<int>(width));
  for (int h = 0; h < height; h++)
  {
    for (int w = 0; w < width; w++)
    {
      cin >> rowcol.at(h).at(w);
      sum_row.at(h) += rowcol.at(h).at(w);
      sum_col.at(w) += rowcol.at(h).at(w);
    }
  }
  for (int h = 0; h < height; h++)
  {
    for (int w = 0; w < width; w++)
    {
      cout << sum_row.at(h) + sum_col.at(w) - rowcol.at(h).at(w);
      if (w != width - 1)
        cout << " ";
    }
    cout << endl;
  }
}
