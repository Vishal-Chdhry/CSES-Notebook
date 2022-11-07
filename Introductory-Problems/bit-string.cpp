#include <bits/stdc++.h>

using namespace std;
using i64 = long long int;

i64 binpow(i64 a, i64 b, i64 m) {
  a %= m;
  i64 res = 1;
  while (b > 0) {
    if (b & 1) res = res * a % m;
    a = a * a % m;
    b >>= 1;
  }
  return res;
}

int solve() {
  int n;
  cin >> n;
  cout << binpow(2, n, 1e9 + 7) << endl;
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