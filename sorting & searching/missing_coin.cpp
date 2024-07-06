#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<long long>arr(n);
    for(int i=0; i<n; i++) cin >> arr[i];
    sort(arr.begin(), arr.end());
    long long ans = 1;
    for(int i=0; i<n; i++){
        if(ans < arr[i]) break;
        else{
            ans += arr[i];
        }
    }
    cout << ans;
    return 0;
}
