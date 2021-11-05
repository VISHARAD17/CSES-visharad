#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>  
#include <complex>
#include <queue>
#include <set>
#include <unordered_set>
#include <list>
#include <chrono>
#include <random>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <stack>
#include <iomanip>
#include <fstream>
using namespace std;

typedef long long ll;
typedef long double ld;
ll MOD = 998244353;
#define all(x) (x).begin(), (x).end()

int main()
{
    string s1, s2;
    cin >> s1 >> s2;

    int m = s1.size(), n = s2.size();
    //cout << m << " " << n << endl;

    vector<vector<int>>dp(m+1, vector<int>(n+1, INT_MAX));

    for(int i=0; i<=m; i++)
        dp[i][0] = i; // first column base case
    for(int j=0; j<=n; j++)
        dp[0][j] = j; // first row base case

    for(int i=1; i<=m; i++){
        for(int j=1; j<=n; j++){
            if(s1[i-1] == s2[j-1]) dp[i][j] = dp[i-1][j-1];
            else{
                dp[i][j] = 1 + min({dp[i][j-1], dp[i-1][j], dp[i-1][j-1]});
            }
        }
    }
    cout << dp[m][n];
    //print(dp);
    // cout << s1 << " " << s2;
    return 0;
}