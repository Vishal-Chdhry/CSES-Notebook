#include <bits/stdc++.h>

using namespace std;
using i64 = long long int;

int sz;
bool chosen[8] = {false};
void permutation(unordered_map<string, bool> &res, string perm, string &str) {
  if (perm.size() == sz) {
    if (!res[perm]) {
      res[perm] = true;
    }
  } else {
    for (int i = 0; i < sz; i++) {
      if (chosen[i]) continue;
      chosen[i] = true;
      perm.push_back(str[i]);
      permutation(res, perm, str);
      chosen[i] = false;
      perm.pop_back();
    }
  }
}
int solve() {
  string str;
  unordered_map<string, bool> res;
  cin >> str;
  sz = str.size();
  sort(str.begin(), str.end());

  permutation(res, "", str);

  cout << res.size() << endl;
  vector<string> ans;
  for (auto &a : res) {
    ans.push_back(a.first);
  }

  sort(ans.begin(), ans.end());
  for (auto a : ans) {
    cout << a << endl;
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