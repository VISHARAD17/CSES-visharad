#include<bits/stdc++.h>
using namespace std;

int main()
{
    double n;
    cin >> n;
    if(n <= 1)
    {
        cout << n;
    }
    else{
        int previos = 0;
        int current = 1;

    for(double i=0; i<n-1; i++){
        int num = 0;
        num = (previos % 1000000007 + current % 1000000007);
        previos = current;
        current = num;
    }
    cout << current;
    }
}