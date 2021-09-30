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
 
int main(){
    int n, x;
    cin  >> n >> x;
    vector<vector<int>>a(n, vector<int>(2));
    for(int i=0; i<n; i++){
        cin >> a[i][0];
        a[i][1] = i+1;
    }
    // since we are sorting we need to keep track of indices of the original array
    sort(a.begin(), a.end());

    for(int i=0; i<n; i++){
        int x2 = x - a[i][0];
        for(int j=i+1, k = n-1; j<k; j++){
            while(j<k && a[j][0]+a[k][0] > x2) k--;
            if(j<k && a[j][0]+a[k][0] == x2){
                cout << a[i][1] << " " << a[j][1] << " " << a[k][1];
                return 0;
            }
        }
    }
    cout << "IMPOSSIBLE";
}