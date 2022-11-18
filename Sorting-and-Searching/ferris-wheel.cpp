#include <bits/stdc++.h>

using namespace std;
using i64 = long long int;

int solve() {
  int n, max_w, bucket, begin, end;
  cin >> n >> max_w;
  vector<int> children;
  for (int _ = 0; _ < n; _++) {
    cin >> bucket;
    children.push_back(bucket);
  }
  sort(children.begin(), children.end());
  bucket = 0;
  begin = 0;
  end = n - 1;

  while (begin <= end) {
    if (children[begin] + children[end] <= max_w) {
      begin++;
    }
    end--;
    bucket++;
  }
  cout << bucket << endl;
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