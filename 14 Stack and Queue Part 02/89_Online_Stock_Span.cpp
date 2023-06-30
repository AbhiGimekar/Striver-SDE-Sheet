#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    class StockSpanner
    {
        stack<pair<int, int>> stock; // {price, days};
    public:
        StockSpanner()
        {
        }

        int next(int price)
        {
            int days = 1;

            while (!stock.empty() && stock.top().first <= price)
            {
                days += stock.top().second;
                cout << days << " ";
                stock.pop();
            }

            stock.push({price, days});
            return days;
        }
    };

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