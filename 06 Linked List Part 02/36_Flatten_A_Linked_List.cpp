#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    struct Node
    {
        int data;
        struct Node *next;
        struct Node *bottom;

        Node(int x)
        {
            data = x;
            next = NULL;
            bottom = NULL;
        }
    };

    Node *merge(Node *a, Node *b)
    {
        Node *temp = new Node(0);
        Node *res = temp;

        while (a != NULL && b != NULL)
        {
            if (a->data < b->data)
            {
                temp->bottom = a;
                a = a->bottom;
            }
            else
            {
                temp->bottom = b;
                b = b->bottom;
            }
            temp = temp->bottom;
        }

        if (a != NULL)
            temp->bottom = a;
        else
            temp->bottom = b;

        return res->bottom;
    }

    Node *flatten(Node *root)
    {
        // Your code here
        if (root == NULL || root->next == NULL)
            return root;

        root->next = flatten(root->next);

        root = merge(root, root->next);

        return root;
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