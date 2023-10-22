#include <iostream>
#include <vector>
#include<map>
#include<cstring>
#include <algorithm>
#include<unordered_map>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs)
{
    vector<vector<string>> result;
    unordered_map<string, vector<string>> g;

    for (string str : strs)
    {
        string sr = str;
        sort(sr.begin(), sr.end());

        g[sr].push_back(str);
    }

    for ( auto group : g)
    {
        result.push_back(group.second);
    }

    return result;
}

int main()
{
     vector <string> v = {"eat","tea","tan","ate","nat","bat"};
    vector<vector<string>> s = groupAnagrams(v) ;
    for ( vector<string> group : s)
    {
        for ( string word : group)
        {
            cout << word << " ";
        }
    }



}

