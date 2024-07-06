#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(n);
    vector<int> b(m);
    
    for(int i=0; i<n; i++) cin >> a[i];
    for(int i=0; i<m; i++) cin >> b[i];

    //soting the vectors
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int i=0, j = 0;
    int ans = 0;
    /* logic ->
    after sorting go one by one through the array if the minimum is not satisfied go to the next apartment
    check for the capacity if satisfies increment the ans and go to the next applicant and the apartment
    */
    while(i < n){
        while(j<m && b[j] < a[i]-k) j++;
        if(abs(a[i]-b[j]) <= k){
            ans++;
            i++;
            j++;
        }
        else{
            i++;
        }
    }
    cout << ans;
    return 0;
}
