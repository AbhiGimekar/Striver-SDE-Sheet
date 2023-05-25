#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Paste function here
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {

        int size = n + m, i;
        m--, n--;
        for (i = size - 1; i >= 0; i--)
        {
            if (m == -1 || n == -1)
                break;
            if (nums1[m] >= nums2[n])
            {
                nums1[i] = nums1[m];
                m--;
            }
            else
            {
                nums1[i] = nums2[n];
                n--;
            }
        }

        while (m >= 0)
        {
            nums1[i--] = nums1[m--];
        }
        while (n >= 0)
        {
            nums1[i--] = nums2[n--];
        }
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