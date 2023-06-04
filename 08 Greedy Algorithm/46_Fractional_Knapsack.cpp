#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    struct Item
    {
        int value;
        int weight;
    };

    bool static comp(Item a, Item b)
    {
        double r1 = (double)a.value / (double)a.weight;
        double r2 = (double)b.value / (double)b.weight;
        return r1 > r2;
    }

    double fractionalKnapsack(int W, Item arr[], int n)
    {
        // Your code here
        sort(arr, arr + n, comp);

        int curWeight = 0;
        double finalValue = 0.0;

        for (int i = 0; i < n; i++)
        {
            if (curWeight + arr[i].weight <= W)
            {
                curWeight += arr[i].weight;
                finalValue += arr[i].value;
            }
            else
            {
                int remain = W - curWeight;
                finalValue += (arr[i].value / (double)arr[i].weight) * (double)remain;
                break;
            }
        }

        return finalValue;
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