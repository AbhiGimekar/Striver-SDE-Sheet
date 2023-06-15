#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    class LRUCache
    {
        class Node
        {
        public:
            int key;
            int val;
            Node *next;
            Node *prev;
            Node(int _key, int _val)
            {
                key = _key;
                val = _val;
            }
        };

        Node *head = new Node(-1, -1);
        Node *tail = new Node(-1, -1);

        int size;
        unordered_map<int, Node *> mp;

    public:
        LRUCache(int capacity)
        {
            size = capacity;
            head->next = tail;
            tail->prev = head;
        }

        void addNode(Node *newNode)
        {
            Node *temp = head->next;
            newNode->next = temp;
            newNode->prev = head;
            head->next = newNode;
            temp->prev = newNode;
        }

        void deleteNode(Node *delNode)
        {
            Node *delPrev = delNode->prev;
            Node *delNext = delNode->next;
            delPrev->next = delNext;
            delNext->prev = delPrev;
        }

        int get(int key)
        {
            if (mp.find(key) != mp.end())
            {
                Node *temp = mp[key];
                int val = temp->val;
                mp.erase(key);
                deleteNode(temp);
                addNode(temp);
                mp[key] = head->next;
                return val;
            }
            return -1;
        }

        void put(int key, int value)
        {
            if (mp.find(key) != mp.end())
            {
                Node *existingNode = mp[key];
                mp.erase(key);
                deleteNode(existingNode);
            }
            if (mp.size() == size)
            {
                mp.erase(tail->prev->key);
                deleteNode(tail->prev);
            }

            addNode(new Node(key, value));
            mp[key] = head->next;
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