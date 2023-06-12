#include <bits/stdc++.h>
using namespace std;

class Solution
{
    stack<int> input, output;

public:
    void push(int x)
    {
        input.push(x);
    }

    int pop()
    {
        int x = peek();
        output.pop();
        return x;
    }

    int peek()
    {
        if (!output.empty())
        {
            int x = output.top();
            return x;
        }
        else
        {
            while (!input.empty())
            {
                output.push(input.top());
                input.pop();
            }
            int x = output.top();
            return x;
        }
    }

    bool empty()
    {
        return input.empty() && output.empty();
    }

    void print()
    {
        cout << 'Hello, Abhay';
    }
};

int main()
{
    Solution s;
    s.print();
    return 0;
}