#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    struct Job
    {
        int id;     // Job Id
        int dead;   // Deadline of job
        int profit; // Profit if job is over before or on deadline
    };

    bool static comp(Job a, Job b)
    {
        return a.profit > b.profit;
    }

    vector<int> JobScheduling(Job arr[], int n)
    {
        // your code here
        sort(arr, arr + n, comp);

        int maxi = arr[0].dead;
        for (int i = 1; i < n; i++)
            maxi = max(maxi, arr[i].dead);

        vector<int> slot(n + 1, -1);
        int countJobs = 0, jobProfit = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = arr[i].dead; j > 0; j--)
            {
                if (slot[j] == -1)
                {
                    slot[j] = i;
                    countJobs++;
                    jobProfit += arr[i].profit;
                    break;
                }
            }
        }

        return {countJobs, jobProfit};
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