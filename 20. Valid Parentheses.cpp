#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;
bool check (char c) {
 return c == '}' || c == ']' || c == ')' ;
}
bool isValid(string s)
{
    stack<char> d;
    for (auto ss : s)
    {
        if (ss == '[' || ss == '{' || ss == '(')
        {
            d.push(ss);
        }
        else {
            return check(ss) ;

        }
    }
}
int main()
{
string s ;
cin >> s ;
cout << isValid(s) ;
}
