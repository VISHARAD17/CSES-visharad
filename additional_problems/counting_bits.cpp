#include <iostream>
#include <string>
#include <algorithm>
#include <bitset>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <assert.h> 
using namespace std;

typedef long long ll;
typedef long double ld;
const ll MOD = 1e9+7;
#define all(x) (x).begin(), (x).end()

int countBits(int n){
    string bits = bitset<32>(n).to_string();
    return count(bits.begin(), bits.end(), '1');
}

void solve(){
    //code
    int n;
    cin >> n;
    int ans = 0;
    for(int i=1; i<=n; i++) ans += countBits(i);
    cout << ans << "\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t=1;
    while(t--) solve();
    return 0;
}
