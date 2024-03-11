#include <iostream>
#include <stack>
#include <algorithm>
#include <vector>
#include <cstring>

using namespace std;
bool isOperation (string s)
{
    return s == "+" || s == "*" || s == "-" || s == "/" ;
}
bool isUnaryMinus(string s)
{
    return s == "-";
}
int evalRPN(vector<string>& tokens)
{
    stack<int> s ;
    for (auto tt : tokens)
    {
        char c = tt[0];
        if (isdigit(c) || (c == '-' && tt.length() > 1))
        {
            s.push(stoi(tt));
        }
        else
        {
            if (isOperation(tt))
            {
                int operand2 = s.top();
                s.pop();
                int operand1 = s.top();
                s.pop();

                switch (tt[0])
                {
                case '+':
                    s.push(operand1 + operand2);
                    break;
                case '-':
                    if (tt.length() > 1)
                    {
                        s.push(-operand2);
                    }
                    else
                    {
                        s.push(operand1 - operand2);
                    }
                    break;
                case '*':
                    s.push(operand1 * operand2);
                    break;
                case '/':
                    if (operand2 == 0)
                    {
                        return 0;
                    }
                    s.push(operand1 / operand2);
                    break;
                }
            }
        }
    }
    return s.top();

}

int main()
{
    vector<string> v = {"10","-2","+"};
    cout << evalRPN(v);
}
