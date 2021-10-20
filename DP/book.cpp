#include<bits/stdc++.h>
using namespace std;

int main(){
    
    //input
    int n, x;
    cin >> n >> x; // n -> no. of books
    vector<int>pages(n), prices(n);
    for(int i=0; i<n; i++) cin >> prices[i];
    for(int i=0; i<n; i++) cin >> pages[i];

    //solution
    vector<vector<int>>dp(n+1, vector<int>(x+1, 0));

    for(int i=1; i<=n ; i++){
        for(int j=1; j<=x; j++){
            if(prices[i-1] > j) dp[i][j] = dp[i-1][j] ;// if price is greater then cannot buy new
            else{
                dp[i][j] = max(pages[i-1] + dp[i-1][j - prices[i-1]], dp[i-1][j]);
            }
        }
    }

    cout << dp[n][x];

    return 0;
}