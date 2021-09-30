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
    int n;
    ll x;
    cin >> n;
    ll ans = 0;
    ll sum = 0;

    map<ll, int>mp;
    mp[0]++;
    
    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        sum = (sum + a%n +n)%n;
        ans += mp[sum];
        mp[sum]++;
    }
    cout << ans;
    return 0;
}