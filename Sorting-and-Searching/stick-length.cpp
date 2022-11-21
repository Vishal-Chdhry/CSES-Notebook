#include <bits/stdc++.h>

using namespace std;
using i64 = long long int;

int solve() {
  i64 n, ans, median;
  vector<i64> arr;
  cin >> n;
  for (i64 i = 0; i < n; i++) {
    cin >> ans;
    arr.push_back(ans);
  }
  sort(arr.begin(), arr.end());
  median = arr[n / 2];
  ans = 0;
  for (i64 i : arr) {
    ans += abs(i - median);
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