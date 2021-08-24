#include<bits/stdc++.h>
using namespace std;

int main(){       
    int n;
    cin >> n;
    vector<long long> arr(n);
    for(int i=0 ; i<n; i++){
        cin >> arr[i];
    }
    long long max_num = arr[0];
    long long a = max_num;

    for(int i=1; i<n; i++){
        a = max(a+arr[i], arr[i]);
        max_num = max(a, max_num);
    }
    cout << max_num;
}