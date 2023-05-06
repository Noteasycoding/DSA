#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int _val)
    {
        val = _val;
        next = nullptr;
    }
};

class LinkedList
{
private:
    Node *head;

public:
    LinkedList()
    {
        head = nullptr;
    }

    // Adding an element at the beginning of the LinkedList
    void addBegin(int val)
    {
        Node *newNode = new Node(val);
        newNode->next = head;
        head = newNode;
    }

    // Adding the element at the ending of the LinkedList
    void addEnd(int val)
    {
        Node *curr = head;
        while (curr->next != nullptr)
        {
            curr = curr->next;
        }

        Node *newNode = new Node(val);
        curr->next = newNode;
    }

    // Adding the element at the end of LinkedList using tail

    void addEndTail(int val)
    {
        Node *tail = head;
        while (tail->next != NULL)
        {
            tail->next += 1;
        }
        Node *newNode = new Node(val);
        tail->next = newNode;
        tail->next = NULL;
    }

    void add(int val)
    {
        Node *newNode = new Node(val);
        head = newNode;
    }

    // Delete the node from Beginnig
    void DeleteBegin()
    {

        Node *temp = head;
        head = head->next;
        free(temp);
    }

    // Delete the node from Ending
    void DeleteEnd()
    {
        Node *curr = head;
        while (curr->next->next != nullptr)
        {
            curr = curr->next;
        }
        delete curr->next;

        curr->next = nullptr;
    }

    // Printing all the element of the Linkedlist
    void display()
    {
        if (head == nullptr)
        {
            cout << "The Linked List is empty";
            cout << endl;
            return;
        }
        else
        {
            cout << "Linkedlist is : ";
            Node *curr = head;
            while (curr != nullptr)
            {
                cout << curr->val << " ";
                curr = curr->next;
            }
            cout << endl;
        }
    }
};

int main()
{
    LinkedList ll;

    // Empty Linkedlist
    ll.display();

    // Adding '1' to the Linkedlist
    ll.add(1);
    ll.display();
    // Adding '0' to the Linkedlist
    ll.addBegin(0);
    ll.display();

    // Adding '2' to the Linkedlist
    ll.addEnd(2);
    ll.display();

    ll.DeleteEnd();
    ll.display();

    ll.addEndTail(3);
    ll.display();

    return 0;
}