#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    int n;
    cin >> n;
    vector<int> dp(n + 1, INT_MAX);
    dp[0] = 0;

    for (int i = 0; i <= n; i++){
        int temp = i;
        while (temp != 0)
        {
            int d = temp % 10;
            temp /= 10;
            if(d == 0)
                continue;
            dp[i] = min(dp[i], 1 + dp[i - d]);
        }
    }
    cout << dp[n];
}