#include <iostream>
#include<vector>
#define ll long long
using namespace std;


int main()
{
    ll n, sum;
    cin >> n >> sum;
    //input for coins
    vector<ll> coin(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> coin[i];
    }
    vector<ll> dp(sum + 1, INT_MAX);

    dp[0] = 0;
    for (ll i = 0; i < sum + 1; i++){
        for (ll j = 0; j < n; j++){
            if(i-coin[j] >= 0){
                dp[i] = min(dp[i], 1 + dp[i - coin[j]]);
            }
        }
    }

    if(dp[sum] == INT_MAX)
        cout << -1;
    else
        cout << dp[sum];

    return 0;
}
