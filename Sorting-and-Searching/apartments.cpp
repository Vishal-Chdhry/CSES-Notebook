#include <bits/stdc++.h>

using namespace std;
using i64 = long long int;
bool isAcceptable(int &asking_price, int &cost, int &diff_allowed) {
  return asking_price > cost ? !!(asking_price - cost <= diff_allowed)
                             : !!(cost - asking_price <= diff_allowed);
}
int solve() {
  int n, m, k, bucket;
  cin >> n >> m >> k;
  vector<int> applicants, apartments;
  for (int i = 0; i < n; i++) {
    cin >> bucket;
    applicants.push_back(bucket);
  }
  for (int i = 0; i < m; i++) {
    cin >> bucket;
    apartments.push_back(bucket);
  }
  bucket = 0;
  sort(applicants.begin(), applicants.end());
  sort(apartments.begin(), apartments.end());
  int iterations = 0;
  auto it = apartments.begin();
  for (int app : applicants) {
    while (!isAcceptable(app, *it, k)) {
      iterations++;
      if (*it > app)
        break;
      else {
        it++;
        if (it == apartments.end()) break;
      }
    }
    iterations++;
    if (it == apartments.end()) break;
    if (isAcceptable(app, *it, k)) {
      bucket++;
      it++;
      if (it == apartments.end()) break;
    }
  }
  std::cout << bucket << endl;
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