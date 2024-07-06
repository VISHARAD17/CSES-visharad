#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007;

int main(){
    ll n, s = 1;
    cin >> n;
    for(int i=0; i<n; i++){
        s = 2*s % ((int)1e9+7);
    }
    cout << s;
}