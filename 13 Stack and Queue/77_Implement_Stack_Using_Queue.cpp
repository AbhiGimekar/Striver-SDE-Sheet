#include <bits/stdc++.h>
using namespace std;

class Solution
{
    queue<int> first;
public:
    void push(int x)
    {
        first.push(x);
        int n = first.size();
        for (int i = 0; i < n - 1; i++)
        {
            first.push(first.front());
            first.pop();
        }
    }

    int pop()
    {
        int x = first.front();
        first.pop();
        return x;
    }

    int top()
    {
        return first.front();
    }

    bool empty()
    {
        return first.empty();
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