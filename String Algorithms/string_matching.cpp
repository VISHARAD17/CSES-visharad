#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1, s2;
    cin >> s1;
    cin >> s2;
    int l = s2.size();
    int ans = 0;
    for(int i=0; i<s1.size()-s2.size()+1; i++){
        if(s1.substr(i, l) == s2) ans++;
    }
    cout << ans;
    return 0;
}