#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isPossible(int node, int colors[], bool graph[101][101], int n, int col)
    {
        for (int k = 0; k < n; k++)
        {
            if (k != node && graph[k][node] == 1 && colors[k] == col)
                return false;
        }
        return true;
    }

    bool fun(int node, int colors[], int m, int n, bool graph[101][101])
    {
        if (node == n)
        {
            return true;
        }

        for (int i = 1; i <= m; i++)
        {
            if (isPossible(node, colors, graph, n, i))
            {
                colors[node] = i;
                if (fun(node + 1, colors, m, n, graph))
                    return true;
                colors[node] = 0;
            }
        }
        return false;
    }

    bool graphColoring(bool graph[101][101], int m, int n)
    {
        // your code here
        int colors[n] = {0};
        if (fun(0, colors, m, n, graph))
            return true;
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