#include <bits/stdc++.h>

using namespace std;
using i64 = long long int;

int solve() {
  int n, ans, curr_index = 1;
  cin >> n;
  vector<int> vec(n + 1, 0);
  vector<int> arr(n + 1, 0);
  for (int i = 1; i <= n; i++) {
    cin >> ans;
    vec[ans] = i;
    arr[i] = ans;
  }
  ans = 1;
  for (int i = 1; i <= n; i++) {
    if (curr_index > vec[i]) {
      ans++;
    }
    curr_index = vec[i];
  }
  std::cout << ans << endl;
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
