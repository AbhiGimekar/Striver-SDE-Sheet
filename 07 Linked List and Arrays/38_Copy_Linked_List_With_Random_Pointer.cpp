#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    class Node
    {
    public:
        int val;
        Node *next;
        Node *random;

        Node(int _val)
        {
            val = _val;
            next = NULL;
            random = NULL;
        }
    };

    Node *copyRandomList(Node *head)
    {

        Node *cur = head;
        Node *front = head;
        while (cur)
        {
            front = cur->next;
            Node *copy = new Node(cur->val);
            cur->next = copy;
            copy->next = front;
            cur = front;
        }

        cur = head;
        while (cur)
        {
            if (cur->random != NULL)
            {
                cur->next->random = cur->random->next;
            }
            cur = cur->next->next;
        }

        cur = head;
        Node *pseudoHead = new Node(0);
        Node *copy = pseudoHead;
        while (cur)
        {
            front = cur->next->next;
            copy->next = cur->next;
            cur->next = front;
            copy = copy->next;
            cur = cur->next;
        }

        return pseudoHead->next;
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