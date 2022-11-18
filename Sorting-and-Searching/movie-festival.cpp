#include <bits/stdc++.h>

using namespace std;
using i64 = long long int;

int solve() {
  int n, last_left = -1, end, start, ans = 0;
  cin >> n;
  vector<pair<int, int>> entries;
  while (n--) {
    cin >> start >> end;
    entries.push_back({end, start});
  }
  sort(entries.begin(), entries.end());

  for (auto entry : entries) {
    end = entry.first;
    start = entry.second;
    if (start >= last_left) {
      ans++;
      last_left = end;
    }
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