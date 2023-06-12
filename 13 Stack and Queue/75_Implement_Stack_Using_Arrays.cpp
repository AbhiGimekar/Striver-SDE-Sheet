#include <bits/stdc++.h>
using namespace std;

class Solution
{
    int N = 1000, top = -1;
    int *arr;

public:
    Solution()
    {
        arr = new int(N);
    }

    void push(int x)
    {
        arr[++top] = x;
    }

    void pop()
    {
        top--;
    }

    int top()
    {
        return arr[top];
    }

    int size()
    {
        return top + 1;
    }

    bool isEmpty()
    {
        return top == -1;
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