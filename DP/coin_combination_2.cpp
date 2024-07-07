#include<iostream>
#include<vector>
#define mod 1000000007;
using namespace std;

int main(){
    int n, x;
    cin >> n >> x;
    // x-> sum  n->total coins
    vector<int> dp(x + 1, 0);
    vector<int> coins(n);
    dp[0] = 1; //base case

    //input for coins array
    for (int i = 0; i < n; i++){
        cin >> coins[i];
    }
    //filling array for coin zero
    for (int i = 1; i < x + 1; i++)
    {
        if(i%coins[0] == 0)
            dp[i] = 1;
    }

    for (int j = 1; j < n; j++){
        for (int i = 1; i < x + 1; i++){
            if(i-coins[j] >= 0)
                dp[i] = (dp[i] + dp[i - coins[j]]) % mod;
        }
    }

    cout << dp[x] % mod return 0;
}
