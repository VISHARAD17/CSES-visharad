#include <algorithm>
#include <assert.h>
#include <iostream>
#include <math.h>
#include <regex>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <vector>
using namespace std;

typedef long long ll;
typedef long double ld;
const ll MOD = 1e9 + 7;
#define all(x) (x).begin(), (x).end()
vector<string> str;

void dfs(vector<string> a, vector<vector<bool>>&vis, int i, int j, char move,
         string &ans) {
    const int n = a.size();
    const int m = a[0].size();

    if(a[i][j] == 'B'){
        ans += move;
        str.push_back(ans);
        return;
    }
    if (vis[i][j]) return; // if already visited then go back
    if (a[i][j] == '#') return; // if hit wall then go back

    vis[i][j] = true;
    ans += move;

    // go up, down, left, right for dfs
    if (i - 1 >= 0) dfs(a, vis, i - 1, j, 'U', ans); // up
    if (i + 1 < n) dfs(a, vis, i + 1, j, 'D', ans); // down
    if (j + 1 < m) dfs(a, vis, i, j + 1, 'R', ans); // right
    if (j - 1 >= 0) dfs(a, vis, i, j - 1, 'L', ans); // left
}

void solve() {
  // code
  int n, m;
  cin >> n >> m;
  vector<string> a(n);
  for (auto &x : a)
    cin >> x;
  string ans;

  vector<vector<bool>> vis(n, vector<bool>(m, false));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (a[i][j] == 'A') {
        dfs(a, vis, i, j, '*', ans);
      }
    }
  }
  for (auto &x : vis) {
    for (auto y : x) cout << y << " ";
    cout << "\n";
  }

  for (auto &x : str)
    cout << x << "\n";
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  ll t = 1;
  while (t--)
    solve();
  return 0;
}
