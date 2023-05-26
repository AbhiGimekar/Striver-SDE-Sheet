#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Paste function here
    double myPow(double x, int n)
    {

        double ans = 1.0;
        long long nn = n;
        if (nn < 0)
            nn = -1 * nn;

        while (nn)
        {
            if (nn % 2)
            {
                ans = ans * x;
                nn--;
            }
            else
            {
                x = x * x;
                nn /= 2;
            }
        }

        if (n < 0)
            ans = (double)(1.0) / (double)(ans);

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