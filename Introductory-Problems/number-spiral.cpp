#include <bits/stdc++.h>

using namespace std;
using i64 = long long int;

int solve() {
  i64 x, y;
  cin >> x >> y;
  if (x > y) {
    if (x & 1)
      cout << (x - 1) * (x - 1) + y << endl;
    else
      cout << x * x - y + 1 << endl;
  } else {
    if (y & 1)
      cout << y * y - x + 1 << endl;
    else
      cout << (y - 1) * (y - 1) + x << endl;
  }
  return 0;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int tc = 1;
  cin >> tc;
  for (int t = 1; t <= tc; t++) {
    // cout << "Case #" << t  << ": ";
    solve();
  }
}