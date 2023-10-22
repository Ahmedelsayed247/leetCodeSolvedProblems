#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

vector<int> topKFrequent(vector<int>& nums, int k)
{
    vector<int> result;

    map<int, int> m;
    for (auto it : nums)
    {
        m[it]++;
    }

    vector<pair<int, int>> freqpair;
    for (auto p : m)
    {
        freqpair.push_back({p.first, p.second});
    }

    sort(freqpair.begin(), freqpair.end(), []( pair<int, int> a,  pair<int, int>b)
    {
        return a.second > b.second;
    });
    for (int i = 0; i < k; i++)
    {
        result.push_back(freqpair[i].first);
    }

    return result;
}

int main()
{
    vector<int> v = {1, 1, 2, 2, 3};
    vector<int> r = topKFrequent(v, 2);

    for (auto it : r)
    {
        cout << it << " ";
    }

    cout << endl;

    return 0;
}
