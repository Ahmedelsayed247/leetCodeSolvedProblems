#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;
#include <algorithm> // for std::min

class MinStack
{
private:
    int *data;
    int *minElements;
    int topind;
    int capacity;

public:
    MinStack()
    {
        capacity = 2; // Correctly assigning capacity
        data = new int[capacity];
        minElements = new int[capacity];
        topind = -1;
    }

    ~MinStack()
    {
        delete[] data;
        delete[] minElements;
    }

    void push(int val)
    {
        if (topind == capacity - 1)
        {
            int newcapacity = capacity * 2;
            int *newData = new int[newcapacity];
            int *newMins = new int[newcapacity];

            for (int i = 0; i <= topind; ++i)
            {
                newData[i] = data[i];
                newMins[i] = minElements[i];
            }

            delete[] data;
            delete[] minElements;

            data = newData;
            minElements = newMins;
            capacity = newcapacity;
        }

        ++topind;
        data[topind] = val;
        minElements[topind] = (topind == 0) ? val : std::min(val, minElements[topind - 1]);
    }

    void pop()
    {
        if (topind >= 0)
        {
            --topind;
        }
    }

    int top()
    {
        return data[topind];
    }

    int getMin()
    {
        return minElements[topind];
    }
};


int main()
{

}
