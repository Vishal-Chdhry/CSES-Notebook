#include <bits/stdc++.h>

using namespace std;
using i64 = long long int;

int solve() {
  i64 n;
  cin >> n;
  i64 ans = (n * (n + 1)) / 4;
  if (n * (n + 1) % 4)
    cout << "NO" << endl;
  else {
    cout << "YES" << endl;
    if (n & 1) {
      int i = n - 1;
      cout << n / 2 + 1 << endl;
      while (ans > 0) {
        cout << i << ' ' << n - i << ' ';
        i--;
        ans -= n;
      }
      cout << endl;
      cout << n / 2 << endl;
      cout << n << ' ';
      for (int j = i; j >= n - i; j--) {
        cout << j << ' ';
      }
    } else {
      int i = n;
      cout << n / 2 << endl;
      while (ans > 0) {
        cout << i << ' ' << n - i + 1 << ' ';
        i--;
        ans -= n + 1;
      }
      cout << endl;
      cout << n / 2 << endl;
      for (int j = i; j >= n - i + 1; j--) {
        cout << j << ' ';
      }
    }
  }
  return 0;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int tc = 1;
  // cin >> tc;
  for (int t = 1; t <= tc; t++) {
    // cout << "Case #" << t  << ": ";
    solve();
  }
}