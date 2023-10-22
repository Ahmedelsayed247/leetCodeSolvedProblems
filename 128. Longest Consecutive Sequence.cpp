#include <iostream>
#include <vector>
#include <map>
#include<unordered_map>
#include<unordered_set>

using namespace std;

int longestConsecutive(vector<int>& nums)
{
    unordered_set<int> m(nums.begin(),nums.end());
    int ans = 0 ;
    for (int i = 0 ; i <nums.size() ; i++)
    {
        if(!m.count(nums[i]-1))
        {
            int cnt=1 ;
            while(m.count(nums[i]+cnt))
                cnt++ ;

            ans = max(ans,cnt);
        }
    }
    return ans;




}

int main()
{
    vector<int> v = {100,4,200,1,3,2} ;
    cout << longestConsecutive(v) ;

}
