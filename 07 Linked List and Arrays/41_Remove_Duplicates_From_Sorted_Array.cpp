#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int k = 1;
        for (int i = 1; i < nums.size(); i++)
            if (nums[i] != nums[i - 1])
                nums[k++] = nums[i];
        return k;
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