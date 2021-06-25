#include<bits/stdc++.h>
using namespace std;

int main(){
    double n;
    cin >> n;
    vector<double> a(n);
    for(double i; i<n; i++){
        cin >> a[i];
    }

    map<double, double> distinct_nums;
    for (const double &item : a)
    {
        distinct_nums[item]++;
    }

    int max_count = 0;
    for (auto item : distinct_nums)
    {
        if (item.second >= max_count)
        {
            max_count = item.second;
        }
        else
        {
            continue;
        }
    }
    cout << distinct_nums.size();
}