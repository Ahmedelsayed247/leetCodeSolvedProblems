#include <iostream>
#include <vector>
#include<map>
#include<cstring>
#include<string>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target)
{
    vector<int> v ;
 for (int i = 0 ; i <nums.size()-1 ; i++) {
    for (int j = i+1 ; j <nums.size() ; j++ ){
        if (nums[i]+nums[j] == target) {
            v.push_back(i) ;
            v.push_back(j) ;
            cout << i << " " << j ;
            return v ;
            break ;
        }
    }
 }
}
int main()
{
    vector<int > v = {3,3} ;
    int target = 6;
    vector <int > s = twoSum(v, target);

    for (auto it : s ) {
        cout << it << " " ;
    }
}
