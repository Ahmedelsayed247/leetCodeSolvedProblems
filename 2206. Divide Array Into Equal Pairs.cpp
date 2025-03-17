class Solution {
public:
    bool divideArray(vector<int>& nums) {
         bitset<501> bit; 

        for (int num : nums) {
            bit[num] =!bit[num];
        }

        return bit.none();
    }
};
