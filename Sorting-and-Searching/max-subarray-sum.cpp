#include <bits/stdc++.h>

using namespace std;
using i64 = long long int;

int solve() {
  i64 n, curr_sum, max_sum = INT32_MIN;
  cin >> n;
  vector<i64> arr;
  while (n--) {
    cin >> curr_sum;
    max_sum = max(curr_sum, max_sum);
    arr.push_back(curr_sum);
  }
  curr_sum = 0;

  for (i64 i : arr) {
    curr_sum += i;
    max_sum = max(curr_sum, max_sum);
    if (curr_sum < 0) curr_sum = 0;
  }
  cout << max_sum << endl;
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