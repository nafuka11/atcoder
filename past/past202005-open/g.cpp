#include <bits/stdc++.h>
using namespace std;

const int dx[] = {1, 0, -1, 1, -1, 0};
const int dy[] = {1, 1, 1, 0, 0, -1};
const int grids_pos = 202;
const int INF = 100000000;
const int OBSTACLE = -1;
typedef pair<int, int> P;

int bfs(int x, int y, vector<vector<int>> &grids, P &goal)
{
  queue<P> q;
  q.push(P(x, y));
  grids.at(x + grids_pos).at(y + grids_pos) = 0;

  P pos;
  while (!q.empty())
  {
    pos = q.front();
    q.pop();
    if (pos == goal)
    {
      break;
    }
    for (int i = 0; i < 6; i++)
    {
      P tmp = pos;
      pos.first += dx[i];
      pos.second += dy[i];
      if (grids.at(pos.first + grids_pos).at(pos.second + grids_pos) == INF)
      {
        grids.at(pos.first + grids_pos).at(pos.second + grids_pos) = grids.at(tmp.first + grids_pos).at(tmp.second + grids_pos) + 1;
        q.push(pos);
      }
      pos = tmp;
    }
  }
  if (pos == goal)
  {
    return grids.at(goal.first + grids_pos).at(goal.second + grids_pos);
  }
  else
  {
    return -1;
  }
}

int main()
{
  int obstacle_num;
  P goal;
  cin >> obstacle_num >> goal.first >> goal.second;
  vector<vector<int>> grids(405, vector<int>(405, INF));
  for (int i = 0; i < obstacle_num; i++)
  {
    int x, y;
    cin >> x >> y;
    grids.at(x+grids_pos).at(y+grids_pos) = OBSTACLE;
  }
  for (int i = 0; i < grids.size(); i++)
  {
    grids.at(i).at(0) = OBSTACLE;
    grids.at(i).at(grids.at(i).size() - 1) = OBSTACLE;
  }
  for (int i = 0; i < grids.at(0).size(); i++)
  {
    grids.at(0).at(i) = OBSTACLE;
    grids.at(grids.size() - 1).at(i) = OBSTACLE;
  }

  cout << bfs(0, 0, grids, goal) << endl;
}
