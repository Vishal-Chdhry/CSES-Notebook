#include <bits/stdc++.h>

using namespace std;
using i64 = long long int;

void print_binary(int num, int n) {
  for (int i = n - 1; i >= 0; i--) {
    cout << !!(num & (1 << i));
  }
  cout << endl;
}

int solve() {
  int n;
  cin >> n;
  for (int i = 0; i < 1 << n; i++) {
    print_binary(i ^ (i >> 1), n);
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