#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Paste function here
    int merge(vector<int> &nums, int low, int mid, int high)
    {
        // Counting Pairs
        int total = 0;
        int j = mid + 1;
        for (int i = low; i <= mid; i++)
        {
            while (j <= high && nums[i] > 2LL * nums[j])
                j++;
            total += (j - (mid + 1));
        }

        // Merging
        vector<int> temp;
        int left = low, right = mid + 1;
        while (left <= mid && right <= high)
        {
            if (nums[left] <= nums[right])
                temp.push_back(nums[left++]);
            else
                temp.push_back(nums[right++]);
        }

        while (left <= mid)
            temp.push_back(nums[left++]);
        while (right <= high)
            temp.push_back(nums[right++]);

        for (int i = low; i <= high; i++)
            nums[i] = temp[i - low];

        return total;
    }

    int MergeSort(vector<int> &nums, int low, int high)
    {
        if (low >= high)
            return 0;
        int mid = (low + high) / 2;

        int inv = MergeSort(nums, low, mid);
        inv += MergeSort(nums, mid + 1, high);
        inv += merge(nums, low, mid, high);

        return inv;
    }

    int reversePairs(vector<int> &nums)
    {

        int n = nums.size();
        return MergeSort(nums, 0, n - 1);
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