#include <bits/stdc++.h>

using namespace std;
using i64 = long long int;

int solve() {
  i64 n, i = 1;
  cin >> n;
  if (n <= 9) {
    cout << n << endl;
    return 0;
  }
  while (n > 9 * i * (i64)(log10(i) + 1)) {
    n -= 9 * i * (i64)(log10(i) + 1);
    i *= 10;
  }
  i64 number = i + (n - 1) / (i64)(log10(i) + 1);
  i64 digit = (int)log10(i) - (n - 1) % (i64)(log10(i) + 1);
  number /= (i64)powl(10, digit);
  cout << number % 10 << endl;
  return 0;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int tc = 1;
  cin >> tc;
  for (int t = 1; t <= tc; t++) {
    // cout << "Case #" << t  << ": ";
    solve();
  }
}