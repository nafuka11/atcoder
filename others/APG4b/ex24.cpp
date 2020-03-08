#include <bits/stdc++.h>
using namespace std;

// 以下に、24時間表記の時計構造体 Clock を定義する

// Clock構造体のメンバ変数を書く
struct Clock {
  int hour;
  int minute;
  int second;

  void set(int h, int m, int s)
  {
    hour = h;
    minute = m;
    second = s;
  }

  string to_str()
  {
    char strs[9];
    sprintf(strs, "%02d:%02d:%02d", hour, minute, second);
    return string(strs);
  }

  void shift(int diff_second)
  {
    int max_second = 3600 * 24;
    int now_second = hour * 3600 + minute * 60 + second;
    now_second = (now_second + diff_second) % max_second;
    if (now_second < 0)
    {
      now_second = max_second + now_second;
    }
    hour = now_second / 3600;
    minute = now_second % 3600 / 60;
    second = now_second % 60;
  }
};

// -------------------
// ここから先は変更しない
// -------------------

int main() {
  // 入力を受け取る
  int hour, minute, second;
  cin >> hour >> minute >> second;
  int diff_second;
  cin >> diff_second;

  // Clock構造体のオブジェクトを宣言
  Clock clock;

  // set関数を呼び出して時刻を設定する
  clock.set(hour, minute, second);

  // 時刻を出力
  cout << clock.to_str() << endl;

  // 時計を進める(戻す)
  clock.shift(diff_second);

  // 変更後の時刻を出力
  cout << clock.to_str() << endl;
}