#include <bits/stdc++.h>

using namespace std;
using i64 = long long int;

int solve() {
  i64 n;
  cin >> n;
  for (i64 k = 1; k <= n; k++) {
    cout << ((k * k - 1) * (k * k)) / 2 - 4 * (k - 1) * (k - 2) << endl;
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