#include <bits/stdc++.h>  
using namespace std;
 
typedef long long ll;
typedef long double ld;
const ll MOD = 1e9+7;
#define all(x) (x).begin(), (x).end()
 
int main()
{
    int a, b; // a X b rectangle
    cin >> a >> b;
    //code
    vector<vector<int>>dp(a+1, vector<int>(b+1, INT_MAX));

    for(int i=0; i<=a; i++){
        for(int j=0; j<=b; j++){
            if (i == j) dp[i][j] = 0;
            else{
                //vertical cuts
                for(int k=1; k<i; k++){
                    dp[i][j] = min(dp[i][j], 1+dp[k][j]+dp[i-k][j]);
                }

                // horizontal cuts
                for(int k=1; k<j; k++){
                    dp[i][j] = min(dp[i][j], 1 + dp[i][k] + dp[i][j-k]);
                }
            }
        }
    }

    cout << dp[a][b];

    return 0;
}