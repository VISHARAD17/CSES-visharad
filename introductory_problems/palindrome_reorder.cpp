#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    map<char, int>m;
    for(auto item :s){
        m[item]++;
    }
    int c = 0;
    for(auto x:m){
        if(x.second % 2 != 0) c++;
    }
    if(c>1){
        cout << "NO SOLUTION";
        return 0;
    }

    vector<char>v1, v2, v3;
    for(auto x:m){
        if(x.second %2 == 0){
            for(int i=0; i<x.second/2; i++){
                v1.push_back(x.first);
                v2.push_back(x.first);
            }
        }
        else{
            for(int k=0; k<x.second; k++){
                v3.push_back(x.first);
            }
        }
    }
    reverse(v2.begin(), v2.end());
    //appending
    v1.insert(v1.end(), v3.begin(), v3.end());
    v1.insert(v1.end(), v2.begin(), v2.end());
    
    for(auto x:v1){
        cout << x;
    }
    return 0;
}