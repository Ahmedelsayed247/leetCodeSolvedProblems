#include <iostream>
#include <stack>
#include <algorithm>
#include <vector>
#include <cstring>
#include<cmath>
using namespace std;
vector<int> dailyTemperatures(vector<int>& temperatures) {
    vector<int> days(temperatures.size(), 0); // Initialize days vector with zeros
    stack<int> s; // Store the indices of temperatures for which we haven't found a warmer day yet

    for (int i = 0; i < temperatures.size(); ++i) {
        // If the current temperature is warmer than the temperature at the index stored in the stack top,
        // update the days until a warmer temperature for all indices in the stack
        while (!s.empty() && temperatures[i] > temperatures[s.top()]) {
            days[s.top()] = i - s.top();
            s.pop();
        }
        s.push(i); // Push the current index to the stack
    }

    return days;
}

int main()
{
    vector<int> temp = {73,74,75,71,69,72,76,73};
        vector<int> da = dailyTemperatures(temp);

    for (auto d :da ){
        cout << d << " ";
    }

}
