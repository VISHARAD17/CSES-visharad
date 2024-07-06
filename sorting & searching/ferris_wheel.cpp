#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n, x;
    cin >> n >> x;
    vector<int>arr(n);
    for(int i=0; i<n; i++) cin >> arr[i];
    //sorting
    sort(arr.begin(), arr.end());
    int ans = 0;

    for(int i=0, j = n-1; i<j; ){
        while(i<j && arr[i]+arr[j] > x) j--;
        if(i>=j) break;
        j--;
        i++;
        ans++;
    }
    cout << n-ans;
}
