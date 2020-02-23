#include <bits/stdc++.h>
using namespace std;

void printError()
{
  cout << "error" << endl;
}

int main() {
  int A, B;
  string op;
  cin >> A >> op >> B;

  if (op == "+") {
    cout << A + B << endl;
  }
  if (op == "-") {
    cout << A - B << endl;
  }
  if (op == "*") {
    cout << A * B << endl;
  }
  if (op == "/") {
    if (!B)
    {
      printError();
    }
    else
    {
      cout << A / B << endl;
    }
  }
  if (op == "?" || op == "=" || op == "!") {
    printError();
  }
}
