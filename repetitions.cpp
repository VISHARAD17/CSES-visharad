#include <bits/stdc++.h>
using namespace std;

int main()
{
    string n;
    cin >> n;

    map<char, double> distinct_nums;
    for (const char &item : n)
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
    cout << max_count;
}