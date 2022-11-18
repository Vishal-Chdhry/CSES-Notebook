#include <bits/stdc++.h>

using namespace std;
using i64 = long long int;

int solve() {
  int n, last_left = -1, end, start, ans = 0, curr = 0;
  cin >> n;
  vector<int> came, went;
  while (n--) {
    cin >> start >> end;
    last_left = max(last_left, end);
    came.push_back(start);
    went.push_back(end);
  }
  sort(came.begin(), came.end());
  sort(went.begin(), went.end());
  auto ptr1 = came.begin();
  auto ptr2 = went.begin();
  for (int i = 0; i < last_left; i++) {
    i = max(i, min(*ptr1, *ptr2));
    while (ptr1 < came.end() && i == *ptr1) {
      curr++;
      ptr1++;
    }
    while (ptr2 < went.end() && i == *ptr2) {
      curr--;
      ptr2++;
    }
    ans = max(curr, ans);
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