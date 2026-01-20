#include<bits/stdc++.h>
using namespace std;
class SinglyLinkedList
{
   public:
        struct Node
        {
            int data;
            Node* next;
        };

    Node* head = NULL;

    void insertHead(int value)
    {
        Node* newnode = new Node();
        newnode->data = value;
        newnode->next = head;
        head = newnode;
    }
    
    void insertTail(int value)
    {
        Node* newnode = new Node();
        if(!head)
        {
            head = newnode;
            return;
        }
        Node* temp = head;
        newnode->data = value;
        while(temp->next)
        {
            temp = temp->next;
            temp->next = newnode;
        }
    }
    void Display()
    {
        Node* temp = head;
        while(temp!=NULL)
        {
            cout<<temp->data<<"->";
            temp = temp->next;
        }
    }
};


int main()
{
    SinglyLinkedList list;
    list.insertHead(10);
    list.insertHead(20);
    list.insertHead(30);
    list.insertHead(40);

    cout<<"inserting at head ";
    list.Display();
    cout<<" inseting at tail ";
    list.Display();
    cout<<"delete by value is ";
    list.Display();
    cout<<"delete value by position ";
    list.Display();
    cout<<"searched value: ";
    list.Display();
    cout<<"reversed list is: ";
    list.Display();
    cout<<"detecting cycle: ";
    list.Display();
    cout<<"displaying the final list: ";
    list.Display();
}