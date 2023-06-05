#include <bits/stdc++.h>
using namespace std;

class Solution
{
    vector<int> ans;

public:
    void fun(int index, int sum, vector<int> &arr, int N)
    {
        if (index == N)
        {
            ans.push_back(sum);
            return;
        }

        fun(index + 1, sum + arr[index], arr, N);
        fun(index + 1, sum, arr, N);
    }

    vector<int> subsetSums(vector<int> arr, int N)
    {
        fun(0, 0, arr, N);
        // sort(begin(arr), end(arr));
        return ans;
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