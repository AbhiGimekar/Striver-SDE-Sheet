#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    struct ListNode
    {
        int val;
        ListNode *next;
        ListNode() : val(0), next(nullptr) {}
        ListNode(int x) : val(x), next(nullptr) {}
        ListNode(int x, ListNode *next) : val(x), next(next) {}
    };

    ListNode *reverseList(ListNode *head)
    {

        ListNode *cur = head;
        ListNode *prev = NULL;

        while (head != NULL)
        {
            head = head->next;
            cur->next = prev;
            prev = cur;
            cur = head;
        }

        return prev;
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