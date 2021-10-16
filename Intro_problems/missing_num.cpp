#include<bits/stdc++.h>
using namespace std;

int main()
{
    // inputs
    double n;
    cin >> n;
    vector<double> a(n-1);
    for(double i; i< n-1; i++){
        cin >> a[i];
    }

    double sum = (n*(n+1))/2;
    //output
    for(double i=0; i<n-1; i++){
        sum = sum - a[i];
    }
    // missing number will be the number remaining after
    //subtracting all the input numbers
    //printing the remaining number
    cout << setprecision(0) << fixed << sum;
    
}