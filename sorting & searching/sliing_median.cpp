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
    int n,k;
    cin >> n >> k;
    vector<int>a(k);
    vector<int>w(k);
    vector<int>ans;

    for(int i=0; i<n; i++) cin  >> a[i];

    for(int i=0; i<k; i++) w.push_back(a[i]);
    sort(w.begin(), w.end());
    ans.push_back(midEle(w));

    for(int i=0; i<n-k+1; i++){
        w.
    }

}