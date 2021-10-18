#include<bits/stdc++.h>
using namespace std;

int main(){
    int x, n;
    cin >> x >> n;
    set<int>positions;
    multiset<int>lengths;

    positions.insert(0);
    positions.insert(x);
    lengths.insert(x-0); // inserting the longest length without the lights

    for(int i=0; i<n; i++){
        int val; // position
        cin >> val;
        positions.insert(val); // insert the position
        auto iter = positions.find(val); 
        int preVal = *prev(iter); //previous value in the set
        int nextVal = *next(iter); // next value in the set
        lengths.erase(lengths.find(nextVal - preVal)); // erase that length cause their is a traffic light now
        lengths.insert(val - preVal); // insert new length
        lengths.insert(nextVal - val); // insert new length
        cout << *lengths.rbegin() << " ";
    }

    return 0;
}
//Explanation :
/*
    - - - 1 - - - -    max is 5
    - - 1 1 - - - -    max is 3
    - - 1 1 - - 1 -    max still remains 3

*/