#include <bits/stdc++.h>

using namespace std;
using i64 = long long int;

int solve() {
  int n, ans;
  cin >> n;
  multiset<int> towers;
  cin >> ans;
  towers.insert(ans);
  n--;
  while (n--) {
    cin >> ans;
    if (ans > *prev(towers.end()))
      towers.insert(ans);
    else {
      auto a = towers.upper_bound(ans);
      if (a != towers.end()) {
        towers.erase(a);
      }
      towers.insert(ans);
    }
  }
  cout << towers.size() << endl;
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