#include <bits/stdc++.h>
using namespace std;

void print_score(int n, vector<vector<bool>> &solved, vector<int> &solved_people)
{
  int score = 0;
  int people = solved.size();
  for (int i = 0; i < solved.at(n - 1).size(); i++)
  {
    if (!solved.at(n - 1).at(i))
    {
      continue;
    }
    score += people - solved_people.at(i);
  }
  cout << score << endl;
}

void set_solved(int n, int m, vector<vector<bool>> &solved, vector<int> &solved_people)
{
  solved.at(n - 1).at(m - 1) = true;
  solved_people.at(m - 1)++;
}

void query(vector<vector<bool>> &solved, vector<int> &solved_people)
{
  int type, n;
  cin >> type >> n;
  if (type == 1)
  {
    print_score(n, solved, solved_people);
  }
  else
  {
    int m;
    cin >> m;
    set_solved(n, m, solved, solved_people);
  }
}

int main()
{
  int people_num, problem_num, query_num;
  cin >> people_num >> problem_num >> query_num;

  vector<vector<bool>> solved(people_num, vector<bool>(problem_num));
  vector<int> solved_people(problem_num);
  for (int i = 0; i < query_num; i++)
  {
    query(solved, solved_people);
  }
}
