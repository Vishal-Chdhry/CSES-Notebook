#include <bits/stdc++.h>

using namespace std;
using i64 = long long int;

int solve() {
  int n, m, ans;
  cin >> n >> m;
  multiset<int> tickets;
  vector<int> customers;
  for (int i = 0; i < n; i++) {
    cin >> ans;
    tickets.insert(ans);
  }
  for (int i = 0; i < m; i++) {
    cin >> ans;
    customers.push_back(ans);
  }

  for (int customer : customers) {
    auto a = tickets.upper_bound(customer);
    if (a == tickets.begin()) {
      std::cout << -1 << endl;
      continue;
    }
    a--;
    std::cout << *a << endl;
    tickets.erase(a);
  }
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