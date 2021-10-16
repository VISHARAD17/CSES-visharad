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
    int n, t;
    cin >> n >> t;
    vector<int>arr(n);
    unordered_map<int, int>mp;
    for(int i=1; i<=n; i++){
        int temp;
        cin >> temp;
        arr[i-1] = temp;
        mp[temp] = i;
    }
    while(t--){
        int ans = 1;
        int t1, t2;
        cin >> t1 >> t2;
        swap(arr[mp[t1]-1], arr[mp[t2]-1]);
        for(int i=2; i<=n; i++){
            if(mp[i] < mp[i-1]) ans++;
        }
        cout << ans;
    }
    return 0;
}