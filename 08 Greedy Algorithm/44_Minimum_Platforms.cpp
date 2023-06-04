#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findPlatform(int arr[], int dep[], int n)
    {
        sort(arr, arr + n);
        sort(dep, dep + n);

        int platform = 0, maxi = 0;

        int i = 0, j = 0;
        while (i < n && j < n)
        {
            if (arr[i] <= dep[j])
            {
                platform++;
                i++;
            }
            else
            {
                platform--;
                j++;
            }
            maxi = max(maxi, platform);
        }

        return maxi;
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