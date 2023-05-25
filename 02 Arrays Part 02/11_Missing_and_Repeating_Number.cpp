#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Paste function here
    pair<int, int> missingAndRepeating(vector<int> &arr, int n)
    {
        int M, R;
        for (int i = 0; i < n; i++)
        {
            if (arr[abs(arr[i]) - 1] > 0)
            {
                arr[abs(arr[i]) - 1] = -arr[abs(arr[i]) - 1];
            }
            else
            {
                R = abs(arr[i]);
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (arr[i] > 0)
            {
                M = i + 1;
            }
        }
        return {M, R};
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