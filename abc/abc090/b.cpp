#include <bits/stdc++.h>
using namespace std;

int main()
{
  int A, B;
  cin >> A >> B;
  int result = 0;
  for (int i = A; i <= B; i++)
  {
    string s = to_string(i);
    bool isPalindromic = true;
    for (int j = 0; j < s.length() / 2; j++)
    {
      if (s[j] != s[s.length() - j - 1])
      {
        isPalindromic = false;
        break;
      }
    }
    if (isPalindromic)
    {
      result++;
    }
  }
  cout << result << endl;
}