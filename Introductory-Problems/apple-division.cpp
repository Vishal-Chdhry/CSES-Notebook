#include <bits/stdc++.h>

using namespace std;
using i64 = long long int;

int sz;
void ans(vector<i64> val, i64 curr, i64 &min_val, i64 &max_val, i64 sum) {
  if (sum > max_val / 2) return;
  if (sz <= curr) {
    min_val = min(min_val, max_val - 2 * sum);
  } else {
    ans(val, curr + 1, min_val, max_val, sum);
    sum += val[curr];
    ans(val, curr + 1, min_val, max_val, sum);
    sum -= val[curr];
  }
}

int solve() {
  cin >> sz;
  vector<i64> val;
  i64 sum = 0, a;
  for (i64 i = 0; i < sz; i++) {
    cin >> a;
    sum += a;
    val.push_back(a);
  }
  i64 res = INT32_MAX;
  ans(val, 0, res, sum, 0);
  cout << res << endl;
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