#include <bits/stdc++.h>

using namespace std;
using i64 = long long int;

int solve() {
  i64 n, ans, sum = 0;
  cin >> n;
  vector<i64> arr;
  for (int i = 0; i < n; i++) {
    cin >> ans;
    arr.push_back(ans);
  }
  sort(arr.begin(), arr.end());
  for (i64 i : arr) {
    if (i > (sum + 1)) {
      break;
    }
    sum += i;
  }
  cout << sum + 1 << endl;
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