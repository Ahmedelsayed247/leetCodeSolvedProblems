#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include<vector>
#include<map>
#include<cmath>

using namespace std;

int majorityElement(vector<int>& nums) {
    map<int, int> m;
    for (int num : nums) {
        m[num]++;
    }

    int maxCount = 0;
    int majorityElement = 0;
    for (auto mm : m) {
        if (mm.second > maxCount) {
            maxCount = mm.second;
            majorityElement = mm.first;
        }
    }
    return majorityElement;
}
int main() {
    long long n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i]; // Corrected to read into v[i] instead of n
    }

    cout << majorityElement(v);

    return 0;
}
