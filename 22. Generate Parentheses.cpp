#include <iostream>
#include <stack>
#include <algorithm>
#include <vector>
#include <cstring>
#include<cmath>
using namespace std;
void backtrack (vector<string>&result , int open , int close ,int n ,string current) {
    if(current.length() == 2*n) {
        result.push_back(current);
    }
    else {
        if (open < n) {
            backtrack(result , open+1 ,close , n, current + "(");
        }
        if(close < open) {
            backtrack(result , open , close+1 , n ,current +")") ;
        }
    }

}
vector<string> generateParenthesis(int n) {
 vector <string>result ;
 backtrack(result,0,0,n,"");
return result ;
}

int main()
{

}
