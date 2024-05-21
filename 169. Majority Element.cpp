#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include<vector>
#include<map>
#include<cmath>

using namespace std;

int majorityElement(vector<int>& nums) {
    sort(nums.begin(), nums.end());

    int cnt = 0;
    int el = nums[0];
    int maxCount = 0;
    int majorityElement = el;

    for (int i = 0; i < nums.size(); ++i) {
        if (nums[i] == el) {
            ++cnt;
            if (cnt > maxCount) {
                maxCount = cnt;
                majorityElement = el;
            }
        } else {
            el = nums[i];
            cnt = 1;
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
