#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    set<int>s;
    set<int>::iterator it;
    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        s.insert(a);
        it = s.upper_bound(a); //upper bound for a
        if(it != s.end()) s.erase(it); //if that exists remove it
    }

    cout << s.size();

}

/* Explanation : We need to find longest increasing subsequence / non-Decreasing Subsequence 
   this can be solved by maintaining the upper bound or inserting only if the upper bound for that element doesn't exists
*/