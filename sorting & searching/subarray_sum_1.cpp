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
 

void solve(){
}
int main()
{
    ll n, x;
    cin >> n >> x;
    vector<ll>arr(n);
    
    for(ll i=0;i<n; i++) cin >> arr[i];
    ll ans = 0;

    for(ll i=0; i<(1<<n); i++){
        ll c = 0;
        for(ll j=0; j<n; j++){
            if(1<<j & i) c += arr[j];
        }
        if(c == x) ans++;
    }

    cout << ans;
    return 0;
}