#include <bits/stdc++.h>
using namespace std;

int fetch_card()
{
  int card;
  cin >> card;
  if (card == 1)
  {
    card += 13;
  }
  return card;
}

int main()
{
  int a = fetch_card();
  int b = fetch_card();

  if (a > b)
  {
    cout << "Alice" << endl;
  }
  else if (a < b)
  {
    cout << "Bob" << endl;
  }
  else
  {
    cout << "Draw" << endl;
  }
}
