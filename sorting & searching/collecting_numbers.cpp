#include<bits/stdc++.h>
using namespace std;

#define ll long long;

int main(){

    int n;
    cin >> n;
    unordered_map<int, int> mp; // storing indices for the integers
    for(int i=1; i<=n; i++){
        int t;
        cin >> t;
        mp[t] = i;
    }
    int c = 0;
    for(int i=2; i<=n; i++){
        if(mp[i] < mp[i-1]) c++; /* if the previous integer has a index value 
                                 less than current then there is a backword pass */
    }
    cout << c+1;

    return 0;
}

/*
Exaplanatio:
number of passes = no. of backword passes + 1
For example -- 
4 2 1 5 3
here there is a backword pass from 1 to 2 and from 3 to 4
so for the solution we need to count number of backword passes.
A backword pass happens when a number n has lower index value than n-1;
position[n] < position[n-1] then go backward
 */