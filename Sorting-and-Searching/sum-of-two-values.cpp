#include <bits/stdc++.h>

using namespace std;
using i64 = long long int;

int solve() {
  int n, target_sum, ans;
  cin >> n >> target_sum;
  vector<pair<int, int>> values;
  for (int i = 1; i <= n; i++) {
    cin >> ans;
    values.push_back({ans, i});
  }
  sort(values.begin(), values.end());

  auto begin = values.begin(), end = values.end() - 1;
  while (begin < end) {
    if ((*begin).first + (*end).first < target_sum) {
      begin++;
    } else if ((*begin).first + (*end).first > target_sum) {
      end--;
    } else {
      cout << (*begin).second << ' ' << (*end).second << endl;
      return 0;
    }
  }
  cout << "IMPOSSIBLE" << endl;
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