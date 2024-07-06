#include<iostream>
#include<vector>
#include<set>
using namespace std;
// slow solution 
// int main(){
//     int n;
//     cin >> n;
//     vector<int> a(n);
//     //input
//     for(int i=0; i<n; i++) cin >> a[i];
//     int size = 0;
//     for(int i=0; i<n; i++){
//         set<int>m;
//         for(int j=i; j<n; j++){
//             if(m.find(a[j]) == m.end()) m.insert(a[j]);
//             else break;
//         }
//         if(size < m.sze()) size = m.size();
//     }
//     cout << size;
//     return 0;
// }

// fast solution using two pointers
int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin >> a[i];
    set<int>s;
    int i=0, j=0, ans = 0;

    while(i<n && j<n){
        // is new increament j and add the song in the set
        while(j<n && s.count(a[j]) == 0){
            s.insert(a[j]);
            ans = max(ans, j-i+1);
            j++;
        }
        // if not new increament j and remove the song
        while (j<n && s.count(a[j])){
            s.erase(a[i]);
            i++;
        }
    } 
    cout << ans;
    return 0;
}
