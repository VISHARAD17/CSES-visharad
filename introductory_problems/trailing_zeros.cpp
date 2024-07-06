#include<iostream>
using namespace std;
typedef long long ll;


int main(){
    ll num, ans = 0;
    cin >> num;
    for(ll i=5; i<=num; i *=5){
        ans += num/i;
    }
    cout << ans;
}
