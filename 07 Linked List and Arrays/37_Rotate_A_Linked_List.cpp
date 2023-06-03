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

    ListNode *rotateRight(ListNode *head, int k)
    {

        if (head == NULL || head->next == NULL || k == 0)
            return head;

        ListNode *node = head;
        int cnt = 1;
        while (node->next)
        {
            cnt++;
            node = node->next;
        }

        node->next = head;
        k = k % cnt;
        k = cnt - k;

        while (k--)
            node = node->next;

        head = node->next;
        node->next = NULL;

        return head;
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