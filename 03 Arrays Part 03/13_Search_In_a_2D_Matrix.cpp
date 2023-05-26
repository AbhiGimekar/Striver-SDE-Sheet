#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Paste function here
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {

        int m = matrix.size();
        int n = matrix[0].size();

        int low = 0, high = m * n - 1;

        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            int row = mid / n, col = mid % n;

            if (target == matrix[row][col])
                return true;
            else if (target < matrix[row][col])
                high = mid - 1;
            else
                low = mid + 1;
        }

        return false;
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