#include <iomanip>
#include<iostream>
using namespace std;

int main()
{
    double n;
    cin >> n;
    cout << setprecision(0) << fixed << n << " ";
    
    while(n != 1){
        if(fmod(n,2) == 0){
            n = n/2;
            if(n == 1){
                cout << 1;
            }
            else{
                cout << setprecision(0)<< fixed << n <<" ";}
        }
        else {
            n = 3*n + 1;
            cout << setprecision(0)<< fixed << n << " ";
        }
    }
    return 0;
}
