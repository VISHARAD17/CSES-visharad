#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<long long> a(n);
    for(int i=0; i<n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    //middle element
    long long x = a[n/2];
    long long ans = 0;
    for(int i=0; i<n; i++){
        ans += abs(x-a[i]);
    }
    cout << ans;
    return 0;
}
