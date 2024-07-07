#include <cstdlib>
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h> 
using namespace std;

typedef long long ll;
typedef long double ld;
const ll MOD = 1e9+7;
#define all(x) (x).begin(), (x).end()
unordered_map<char, int> mp;

void init(){
    mp['A'] = 1;
    mp['C'] = 2;
    mp['G'] = 3;
    mp['T'] = 4;
}

void solve(){
    //code
    init();
    string s;
    cin >> s;

    const int n = s.size();

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t = 1;
    while(t--) solve();
    return 0;
}
