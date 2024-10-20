/*
Implement a function that merges k sorte linked list into one
sorted linke list using a priority queue
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;
priority_queue <int> pq;

struct node 
{
    int data;
    node* next;
};

class LinkedList
{
    node* head;

    public:
        LinkedList() : head(NULL){}

    void insertAtBeginning(int value)
    {
        node* newNode = new node();
        newNode->data = value;
        newNode->next = NULL;
    }
    void insertAtEnd(int value)
    {
        node* newNode = new node();
        newNode->data = value;
        newNode->next = NULL;

        if(!head)
        {
            head = newNode;
            return;
        }

        node* temp = head;
        while(temp->next)
        {
            temp = temp->next;
        }

        temp->next = newNode; 
    }

    void display()
    {
        if(!head)
        {
            cout <<"List is empty" << endl;
            return;
        }

        node* temp = head;
        while(temp)
        {
            cout << temp->data << "->";
            pq.push(temp->data);
            temp = temp->next;
        }
        cout << "Null" << endl;
    }
};

int main()
{
    LinkedList list;

    list.insertAtBeginning(3);
    list.insertAtEnd(11);
    list.insertAtEnd(19);
    list.insertAtEnd(2);
    list.insertAtEnd(4);
    list.insertAtEnd(77);

    list.display();

    cout << "Sorted:" << endl;
    while(!pq.empty())
    {
        cout << pq.top()<< " ";
        pq.pop();
    };
}
