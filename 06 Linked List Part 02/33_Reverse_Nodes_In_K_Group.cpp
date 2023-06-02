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

    ListNode *reverseKGroup(ListNode *head, int k)
    {
        if (head == NULL || k == 1)
            return head;

        ListNode *dummy = new ListNode(0);
        dummy->next = head;

        ListNode *cur = dummy, *nex = dummy, *pre = dummy;

        int cnt = 0;
        while (cur->next)
        {
            cnt++;
            cur = cur->next;
        }

        while (cnt >= k)
        {
            cur = pre->next;
            nex = cur->next;

            for (int i = 1; i < k; i++)
            {
                cur->next = nex->next;
                nex->next = pre->next;
                pre->next = nex;
                nex = cur->next;
            }
            pre = cur;
            cnt -= k;
        }

        return dummy->next;
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