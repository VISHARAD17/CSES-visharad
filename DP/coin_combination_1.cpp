#include<bits/stdc++.h>
#define mod 1000000007;
using namespace std;

int main(){
    int n, x;
    cin >> n >> x;
    // x-> sum  n->total coins
    vector<int> dp(x + 1, 0);
    vector<int> coins(n);
    dp[0] = 1; //base case
    //input for couins array
    for (int i = 0; i < n; i++){
        cin >> coins[i];
    }
    for (int i = 1; i < x + 1; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i-coins[j] >= 0){
                dp[i] = (dp[i] + dp[i - coins[j]]) % mod;}
        }
    }
    cout << dp[x]%mod
    return 0;
}