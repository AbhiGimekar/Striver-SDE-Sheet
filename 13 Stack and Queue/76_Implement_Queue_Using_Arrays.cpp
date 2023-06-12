#include <bits/stdc++.h>
using namespace std;

class Solution
{
    int N = 1000;
    int *arr;
    int front = 0, rear = 0, cnt = 0;

public:
    Solution()
    {
        arr = new int(N);
    }

    void push(int x)
    {
        if (cnt == N)
            return;
        arr[rear % N] = x;
        rear++;
        cnt++;
    }

    void pop()
    {
        if (cnt == 0)
            return;
        arr[front % N] = -1;
        front++;
        cnt--;
    }

    int top()
    {
        if (cnt == 0)
            return -1;
        return arr[front % N];
    }

    int size()
    {
        return cnt;
    }

    bool isEmpty()
    {
        return cnt == 0;
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