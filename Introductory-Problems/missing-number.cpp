#include <bits/stdc++.h>
using namespace std;

int solve() {
  long long int n;
  cin >> n;
  int ans = 0;
  for (int i = 1; i <= n; i++) {
    ans ^= i;
  }
  for (int i = 1; i < n; i++) {
    int a;
    cin >> a;
    ans ^= a;
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