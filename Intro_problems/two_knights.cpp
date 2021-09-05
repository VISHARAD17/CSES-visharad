#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n;
    cin >> n;
    //formula to count no. of ways 
    // n^2(n^2- 1)/2 - 4(n-1)(n-2)
    for(int k=1; k<=n; k++){
        ll a1 = k*k, a2 = a1 * (a1-1) / 2;
        cout << a2 - 4 *(k-1)*(k-2) << endl;
    }
    return 0;
}