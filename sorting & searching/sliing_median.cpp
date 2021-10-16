#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>  
#include <complex>
#include <queue>
#include <set>
#include <unordered_set>
#include <list>
#include <chrono>
#include <random>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <stack>
#include <iomanip>
#include <fstream>
 
using namespace std;
 
typedef long long ll;
typedef long double ld;
ll MOD = 998244353;
#define all(x) (x).begin(), (x).end()

int median(vector<int>arr){
    int n = arr.size();
    if(n%2 == 0){
        return (arr[n/2+1] + arr[n/2])/2;
    }
    return arr[int(n/2)];
}

int main()
{
    int n,k;
    cin >> n >> k;
    vector<int>a(k);
    vector<int>w(k);
    vector<int>ans;

    for(int i=0; i<n; i++) cin  >> a[i];

    for(int i=0; i<k; i++) w.push_back(a[i]);
    sort(w.begin(), w.end());
    ans.push_back(median(w));

    for(int i=k; i<n-k+1; i++){
        w.pop_back();
        w.push_back(a[k]);
        for(int i=0; i<k; i++) w[i] = w[i+1];
        w.pop_back();
        
    }

    void printNode
}