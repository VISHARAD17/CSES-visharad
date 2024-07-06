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
    int  n;
    cin >> n;
    while(n--){
        ll x, y, ans;
        cin >> x >> y;
        if(y > x){
            //two cases for odd and even
            if(y%2 == 0) ans = ((y-1)*(y-1)) + x;
            else ans = (y*y) - x + 1;
        }
        else{
            if(x%2 == 0) ans = ((x-1) * (x-1)) + y;
            else ans = (x*x) - y + 1;
        }

        cout << ans << endl;
    }
    return 0;
}