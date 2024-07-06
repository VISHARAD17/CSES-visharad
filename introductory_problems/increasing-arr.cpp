#include <iomanip>
#include<iostream>
#include<vector>
using namespace std;

int main(){
    double n, val = 0;
    cin >> n;
    vector<double> a(n);
    for(double i=0; i<n; i++){
        cin >> a[i];
    }
    for(double i=0; i<n-1; i++){
        if(a[i] > a[i+1]){
            val += a[i]- a[i+1];
            a[i+1] = a[i];
        }
        else {
            continue;
        }
    }
    cout << setprecision(0) << fixed << val;
    return 0;
}
