#include <bits/stdc++.h>

using namespace std;
using i64 = long long int;

int solve() {
  int n, ans = 0, div = 5;
  cin >> n;
  while (n >= div) {
    ans += n / div;
    div *= 5;
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