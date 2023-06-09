#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int NthRoot(int n, int m)
    {

        int ans = -1;
        int low = 1, high = m;
        while (low <= high)
        {
            int mid = (high + low) / 2;

            long long temp = 1;
            for (int i = 1; i <= n; i++)
            {
                temp *= mid;
                if (temp > 1LL * m)
                    break;
            }

            if (temp == 1LL * m)
            {
                ans = mid;
                break;
            }
            if (temp > m)
                high = mid - 1;
            else
                low = mid + 1;
        }

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