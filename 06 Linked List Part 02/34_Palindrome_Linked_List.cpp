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

    ListNode *reverseList(ListNode *ptr)
    {
        ListNode *pre = NULL;
        ListNode *nex = NULL;
        while (ptr)
        {
            nex = ptr->next;
            ptr->next = pre;
            pre = ptr;
            ptr = nex;
        }
        return pre;
    }

    bool isPalindrome(ListNode *head)
    {

        if (head == NULL || head->next == NULL)
            return true;

        ListNode *slow = head;
        ListNode *fast = head;

        while (fast->next && fast->next->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }

        slow->next = reverseList(slow->next);
        slow = slow->next;

        ListNode *ptr = head;
        while (slow)
        {
            if (slow->val != ptr->val)
                return false;
            slow = slow->next;
            ptr = ptr->next;
        }
        return true;
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