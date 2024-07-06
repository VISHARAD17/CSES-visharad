#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll n, t_sum, sum = 0, px = 1;
    cin >> n;
    vector<ll> v1; 

    if((n * (n+1))%4 != 0){
        cout << "NO";
        return 0;
    }

    t_sum = n * (n+1) / 4;

    if(t_sum % n == 0){
        v1.push_back(n);
        sum += n;
    }

    while(t_sum != sum){
        if(t_sum % n == 0){
            v1.push_back(n-px);
            v1.push_back(px);
            sum += n;
        }
        else{
            v1.push_back(n-px+1);
            v1.push_back(px);
            sum += n+1;
        }
        px++;
    }
    sort(v1.begin(), v1.end());
    px = 0;
    string v2;
    cout << "YES" << "\n" << v1.size() << "\n";
    // for(auto x:v1){
    //     cout << x << " ";
    // }
    for(int i=1; i<=n; i++){
        if(px < v1.size() && v1[px] == i){
            cout << i << " ";
            px++;
        }
        else{
            v2 += to_string(i) + " ";
        }
    }
    cout << endl <<  n-v1.size() << endl << v2;
}