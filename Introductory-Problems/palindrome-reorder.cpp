#include <bits/stdc++.h>

using namespace std;
using i64 = long long int;

int solve() {
  string str;
  cin >> str;
  int freq[26] = {0};
  int middle = -1;
  for (char c : str) {
    freq[c - 'A']++;
  }
  for (int i = 0; i < 26; i++) {
    if (freq[i] & 1) {
      if (middle != -1) {
        cout << "NO SOLUTION" << endl;
        return 0;
      } else {
        middle = i;
      }
    }
  }
  for (int i = 0; i < 26; i++) {
    if (i == middle)
      continue;
    else {
      for (int j = 0; j < freq[i] / 2; j++) {
        cout << (char)('A' + i);
      }
    }
  }

  if (middle != -1) {
    for (int i = 0; i < freq[middle]; i++) {
      cout << (char)('A' + middle);
    }
  }

  for (int i = 25; i >= 0; i--) {
    if (i == middle)
      continue;
    else {
      for (int j = 0; j < freq[i] / 2; j++) {
        cout << (char)('A' + i);
      }
    }
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