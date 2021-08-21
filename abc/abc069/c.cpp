#include <bits/stdc++.h>
using namespace std;

// 奇数をA, 2の倍数かつ4の倍数でない数をB, 4の倍数をCとする
// 条件が成り立つようにするには、以下の2通りが考えられる
//   Bがある場合：(A C)* B+     -> AとCが同数
//   Bがない場合：(A C)+ A? C*  -> AがC+1以下

void printYesNo(bool result)
{
  if (result)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}

int main()
{
  int odd = 0;
  int mul_2 = 0;
  int mul_4 = 0;
  int len;
  cin >> len;
  for (size_t i = 0; i < len; i++)
  {
    int num;
    cin >> num;
    if (num % 2)
      odd++;
    else if (num % 4 == 0)
      mul_4++;
    else
      mul_2++;
  }
  if (mul_2)
  {
    printYesNo(odd == mul_4);
  }
  else
  {
    printYesNo(odd <= mul_4 + 1);
  }
}
