#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<pair<int, int>> s;

    for(int i=0; i<n; i++){
        long long a, b;
        cin >> a >> b;
        // s.push_back({a, +1});
        // s.push_back({b, -1});

    }
    // for(auto x:s){
    //     cout << x.first << " " << x.second << endl;
    // }
    //sorting
    sort(s.begin(), s.end());
  
    long long movies = 0, max_movies = 0;
    for(int i=0; i<s.size(); i++){
        movies += s[i].second;
        max_movies = max(movies, max_movies);
    }
    //cout << n - max_movies + 1;
    
    return 0;
}
