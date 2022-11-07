#include <bits/stdc++.h>

using namespace std;
using i64 = long long int;

int solve() {
  int n;
  cin >> n;
  if (n == 1) cout << 1;
  if (n < 4)
    cout << "NO SOLUTION" << endl;
  else if (n == 4)
    cout << "3 1 4 2";
  else {
    for (int i = 1; i <= n / 2; i++) {
      cout << i << ' ';
      if (n & 1)
        cout << i + n / 2 + 1 << ' ';
      else
        cout << i + n / 2 << ' ';
    }
    if (n & 1) cout << n / 2 + 1;
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