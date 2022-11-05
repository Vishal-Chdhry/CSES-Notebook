#include <bits/stdc++.h>
using namespace std;

int solve() {
  long long int n;
  cin >> n;
  while (true) {
    cout << n << ' ';
    if (n <= 1) {
      break;
    } else if (n & 1) {
      n = 3 * n + 1;
    } else {
      n /= 2;
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