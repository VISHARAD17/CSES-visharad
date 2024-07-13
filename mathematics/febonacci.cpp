#include<iostream>
using namespace std;
#define MOD 1000000007

int main()
{
    double n;
    cin >> n;
    if(n <= 1)
    {
        cout << n;
    }
    else{
        int prev = 0;
        int cur = 1;

    for(double i=0; i<n-1; i++){
        int num = 0;
        num = (prev % MOD + cur % MOD);
        prev = cur;
        cur = num;
    }
    cout << cur;
    }
}
