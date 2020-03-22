#include <bits/stdc++.h>
using namespace std;

bool is_palindrome(string &s)
{
  string tmp = s;
  reverse(tmp.begin(), tmp.end());
  return (s == tmp);
}

int main()
{
  string s;
  cin >> s;
  string sub_s1 = s.substr(0, (s.size() - 1) / 2);
  string sub_s2 = s.substr((s.size() + 3) / 2 - 1, s.size() - (s.size() + 3) / 2 + 1);
  bool ans = (is_palindrome(s) && is_palindrome(sub_s1) && is_palindrome(sub_s2));
  cout << (ans ? "Yes" : "No") << endl;
}
