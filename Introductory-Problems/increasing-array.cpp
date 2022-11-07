#include <bits/stdc++.h>

using namespace std;
using i64 = long long int;

int solve() {
  i64 n, ans = 0, curr, prev = -1e6;
  cin >> n;
  while (n--) {
    cin >> curr;
    ans += max(0ll, prev - curr);
    prev = max(prev, curr);
  }
  cout << ans << endl;
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