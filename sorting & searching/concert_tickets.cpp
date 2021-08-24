#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    set<array<int, 2>>s;
    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        // ele with its iterator so that repited can also be inserted
        s.insert({a, i});
    }
    for(int i=0; i<m; i++){
        int t;
        cin >> t;
        auto it = s.lower_bound({t+1, 0});
        if(it == s.begin()){
            cout << "-1\n";
        }
        else{
            it--;
            cout << (*it)[0] << "\n";
            s.erase(it);
        }
    }
    return 0;
}