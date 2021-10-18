#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;

int main(){
    int n;
    cin >> n;

    vector<string>grid(n);
    for(int i=0; i<n; i++) cin >> grid[i];

    vector<vector<int>>dp(n, vector<int>(n, 0));
    dp[0][0] = (grid[0][0] == '.');

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(grid[i][j] != '*') // if not an abstacle then proceed
            {
                if(i-1 >= 0 && grid[i-1][j] != '*') dp[i][j] = (dp[i][j] + dp[i-1][j]) % mod; // from top if exists
                if(j-1>=0 && grid[i][j-1] != '*') dp[i][j] = (dp[i][j] + dp[i][j-1]) % mod; // from left if exists
            }
        }
    }
    cout << dp[n-1][n-1];
}