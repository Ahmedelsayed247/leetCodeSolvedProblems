#include <iostream>
#include <vector>
#include<map>
#include<cstring>
#include<string>
using namespace std;
#include <iostream>
#include <vector>
#include <map>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    map<int, int> numIndex;


    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];

        if (numIndex.find(complement) != numIndex.end()) {
            return {numIndex[complement], i};
        }

        numIndex[nums[i]] = i;
    }

    return {}; // Return an empty vector if no solution is found
}

int main() {
    vector<int> v = {1,2,3,4};
    int target = 7;

    vector<int> result = twoSum(v, target);

    for (auto it : result) {
        cout << it << " ";
    }

    return 0;
}

