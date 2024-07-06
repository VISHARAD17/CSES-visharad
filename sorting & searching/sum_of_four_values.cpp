#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <iostream>
#include <map>
 
using namespace std;
 
typedef long long ll;
typedef long double ld;
ll MOD = 998244353;
#define all(x) (x).begin(), (x).end()

int main()
{
    int n, x;
    cin >> n >> x;
    int ans = 0;
    int sum = 0;

    map<int, int>mp;
    mp[0]++;
    
    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        sum += a;
        ans += mp[a-x];
        mp[sum]++;
    }
    cout << ans;
    return 0;
}
