#include<iostream>
#include<vector>
using namespace std;
const int mod = 1e9+7;
typedef long long ll;

int main(){
    ll n, m;
    cin >> n >> m;
    vector<ll>arr(n);
    for(ll i=0; i<n; i++) cin >> arr[i];

    //solution
    vector<vector<long long>>dp(n, vector<long long>(m+1, 0));
    if(arr[0] != 0) dp[0][arr[0]] = 1;
    else{
        for(ll i=1; i<=m; i++){
            dp[0][i] = 1;
        }
    }
    // iterate through each layer
    for(int i=1; i<n; i++){
        //two conditions are possible either element is zero or a number is given
        // if the element is zero
        if(arr[i] == 0){
            for(int j=1; j<=m; j++){
                if(j-1 >= 1){ // if j-1 exists
                    dp[i][j] += dp[i-1][j-1] % mod;
                }
                dp[i][j] += dp[i-1][j] % mod; // same value from the previous layer
                if(j+1 <= m){ // if j+1 exists
                    dp[i][j] += dp[i-1][j+1] % mod;
                }
            }
        }
        else{
            if(arr[i]- 1 >= 1){
                dp[i][arr[i]] = (dp[i][arr[i]] + dp[i-1][arr[i] - 1]) % mod;
            }
            dp[i][arr[i]] = (dp[i][arr[i]] + dp[i-1][arr[i]]) % mod; // same value from the previous layer
            if(arr[i] + 1 <= m){
                 dp[i][arr[i]] = (dp[i][arr[i]] + dp[i-1][arr[i] + 1]) % mod;
            }
        }
    }

    ll ans = 0;
    for(ll i=1; i<=m; i++){
        ans = (ans + dp[n-1][i]) % mod; // all the paths from possible integers from the last layer i.e. n-1th layer
    }

    cout << ans;

    return 0;
}
