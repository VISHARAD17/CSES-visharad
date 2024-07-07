#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
 
using namespace std;
 
typedef long long ll;
typedef long double ld;
ll MOD = 998244353;
#define all(x) (x).begin(), (x).end()
 
int main()
{
    ll n;
    cin >> n;

    vector<ll>v(n);
    ll total_sum = 0;
    for(ll i=0; i<n; i++){
        cin >> v[i];
        total_sum += v[i];
    }

    //for(auto x: v) cout << x << " ";

    ll ans = INT_MAX;
    for(ll i=0; i<(1<<n); i++){
        ll c = 0;
        for(ll j=0; j<n; j++){
            if(1<<j & i) c+= v[j];
        }
        ans = min(ans, abs(total_sum - c - c));
    }
    cout << ans;
    return 0;
}
