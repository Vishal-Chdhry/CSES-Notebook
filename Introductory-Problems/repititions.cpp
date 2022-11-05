#include <bits/stdc++.h>
using namespace std;

int solve() {
  string str;
  cin >> str;
  int ans = 0, curr = 1;
  char prev = 0;
  for (char c : str) {
    if (c == prev) {
      curr++;
    } else {
      ans = max(curr, ans);
      curr = 1;
    }
    prev = c;
  }
  ans = max(curr, ans);
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