#include <bits/stdc++.h>
using namespace std;

void query(vector<vector<int>> &edges, vector<int> &colors)
{
  int type, vertex;
  cin >> type >> vertex;
  cout << colors.at(vertex - 1) << endl;
  if (type == 1)
  {
    for (int i = 0; i < edges.at(vertex - 1).size(); i++)
    {
      colors.at(edges.at(vertex - 1).at(i)) = colors.at(vertex - 1);
    }
  }
  else
  {
    int color;
    cin >> color;
    colors.at(vertex - 1) = color;
  }
}

int main()
{
  int vertex_num, edge_num, query_num;
  cin >> vertex_num >> edge_num >> query_num;
  vector<vector<int>> edges(vertex_num, vector<int>());
  for (int i = 0; i < edge_num; i++)
  {
    int from, to;
    cin >> from >> to;
    edges.at(from - 1).push_back(to - 1);
    edges.at(to - 1).push_back(from - 1);
  }
  vector<int> colors(vertex_num);
  for (int i = 0; i < vertex_num; i++)
  {
    cin >> colors.at(i);
  }

  for (int i = 0; i < query_num; i++)
  {
    query(edges, colors);
  }
}
