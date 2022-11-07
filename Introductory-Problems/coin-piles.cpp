#include <bits/stdc++.h>

using namespace std;
using i64 = long long int;

int solve() {
  int a, b;
  cin >> a >> b;
  if (a < b) swap(a, b);
  int diff = a - b;
  if (b - diff >= 0 && (b - diff) % 3 == 0)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
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