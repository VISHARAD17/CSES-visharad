#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<pair<int, int>> s;

    for(int i=0; i<n; i++){
        int a, b;
        cin >> a >> b;
        s.push_back({a, +1});
        s.push_back({b, -1});

    }
    //sorting
    sort(s.begin(), s.end());
    int actual_customer = 0, max_customer = 0;
    for(int i=0; i<s.size(); i++){
        actual_customer += s[i].second;
        max_customer = max(actual_customer, max_customer);
    }
    cout << max_customer;
    return 0;
    
}