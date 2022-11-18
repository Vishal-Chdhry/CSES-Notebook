#include <bits/stdc++.h>

using namespace std;
using i64 = long long int;

int solve() {
  int n;
  cin >> n;
  unordered_map<int, bool> st;
  int a;
  while (n--) {
    cin >> a;
    st[a] = true;
  }
  cout << st.size() << endl;
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