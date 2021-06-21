#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    for(int i=0; i<n; i++){
        cin >> a[i] >> b[i];
    }

    //cout << a[n-1] <<" "<< b[n-1] << endl;

    for(int i=0; i< n; i++){
        if(a[i] == 0 and b[i] == 0){
            cout << "YES" << endl;
        }
        else if (a[i] == 0 or b[i] == 0){
            cout << "NO"<< endl;
        }
        else if ((2*a[i]-b[i]) >= 0 and (2*b[i] - a[i]) >= 0 and (2*a[i]-b[i])%3 == 0 and (2*b[i] - a[i])%3 == 0){
            cout << "YES" << endl; 
        }
        else{
            cout << "NO" << endl;
        }
    }   
    return 0;
}