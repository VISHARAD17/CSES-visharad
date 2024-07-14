#include <iostream>
#include <unordered_map>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <assert.h> 
using namespace std;

typedef long long ll;
typedef long double ld;
const ll MOD = 1e9+7;
#define all(x) (x).begin(), (x).end()

void solve(){
    //code
    ll n, k;
    cin >> n >> k;
    vector<ll>a(n);
    for(auto &x: a) cin >> x;
    
    ll  left = 0, right = 0, distinct_count = 0, result = 0;
    unordered_map<ll, ll> frq;

    while(right < n){
        if(frq.find(a[right]) == frq.end() or frq[a[right]] == 0) distinct_count++;
        frq[a[right]]++;
        while(distinct_count > k){
            frq[a[left]]--;
            if(frq[a[left]] == 0) distinct_count--;
            left++;
        }
        result += right-left+1;
        right++;
    }
    cout << result <<  "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t=1;
    while(t--) solve();
    return 0;
}
