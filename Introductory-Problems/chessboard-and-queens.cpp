#include <bits/stdc++.h>

using namespace std;
using i64 = long long int;
const int N = 8;
int cnt = 0;

bool isSafe(int board[N][N], int row, int col) {
  int i, j;
  for (i = 0; i < col; i++)
    if (board[row][i] == 1) return false;

  for (i = row, j = col; i >= 0 && j >= 0; i--, j--)
    if (board[i][j] == 1) return false;
  for (i = row, j = col; j >= 0 && i < N; i++, j--)
    if (board[i][j] == 1) return false;

  return true;
}

void nqueens(int board[N][N], int n) {
  if (n >= N) {
    cnt++;
  } else {
    for (int i = 0; i < N; i++) {
      if (board[i][n] == -1)
        continue;
      else if (isSafe(board, i, n)) {
        board[i][n] = 1;
        nqueens(board, n + 1);
        board[i][n] = 0;
      }
    }
  }
}

int solve() {
  int board[N][N] = {0};
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      char c;
      cin >> c;
      if (c == '*') {
        board[i][j] = -1;
      }
    }
  }
  nqueens(board, 0);
  cout << cnt << endl;
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