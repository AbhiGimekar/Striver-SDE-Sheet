#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    class MedianFinder
    {
        priority_queue<int> maxHeap;
        priority_queue<int, vector<int>, greater<int>> minHeap;

    public:
        MedianFinder()
        {
        }

        void addNum(int num)
        {
            if (maxHeap.empty() || (maxHeap.top() > num))
                maxHeap.push(num);
            else
                minHeap.push(num);

            if (maxHeap.size() > (minHeap.size() + 1))
            {
                minHeap.push(maxHeap.top());
                maxHeap.pop();
            }
            else if (minHeap.size() > maxHeap.size() + 1)
            {
                maxHeap.push(minHeap.top());
                minHeap.pop();
            }
        }

        double findMedian()
        {
            if (maxHeap.size() == minHeap.size())
                return maxHeap.empty() ? 0 : ((maxHeap.top() + minHeap.top()) / 2.0);
            else
                return (maxHeap.size() > minHeap.size()) ? maxHeap.top() : minHeap.top();
        }
    };

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