#include <bits/stdc++.h>
using namespace std;

bool isPossible(vector<int> &stalls, int minDist, int cows)
{
    int n = stalls.size();
    int cntCows = 1;
    int lastPlacedCow = stalls[0];
    for (int i = 1; i < n; i++)
    {
        if (stalls[i] - lastPlacedCow >= minDist)
        {
            cntCows++;
            lastPlacedCow = stalls[i];
        }
    }
    if (cntCows >= cows)
        return true;
    return false;
}

void solve()
{
    int n, cows;
    cin >> n >> cows;

    vector<int> stalls(n, 0);
    for (int i = 0; i < n; i++)
        cin >> stalls[i];

    sort(begin(stalls), end(stalls));
    int low = 1, high = stalls[n - 1];

    while (low <= high)
    {
        int mid = (low + high) >> 1;
        if (isPossible(stalls, mid, cows))
            low = mid + 1;
        else
            high = mid - 1;
    }

    cout<<high<<"\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}