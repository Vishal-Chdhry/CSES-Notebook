#include <bits/stdc++.h>

using namespace std;
using i64 = long long int;

void towerOfHanoi(int n, int from, int to, int mid) {
  if (n == 0) return;
  towerOfHanoi(n - 1, from, mid, to);
  cout << from << ' ' << to << endl;
  towerOfHanoi(n - 1, mid, to, from);
}
int solve() {
  int n;
  cin >> n;
  cout << pow(2, n) - 1 << endl;
  towerOfHanoi(n, 1, 3, 2);
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