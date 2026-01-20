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
    void display()
    {
        Node* temp = head;
        while(temp!=NULL)
        {
            cout<<temp->data<<"->";
            temp = temp->next;
        }
    }
    void undo()
    {
        if (head == NULL)
        return;

        Node* temp = head;
        head = head->next;
        delete temp;
    }

};
int main()
{
    SinglyLinkedList list;
    list.insertHead(10);
    list.insertHead(20); 
    list.insertHead(30);    
    cout<<"inserting at head ";
    list.display();
    list.undo();
    cout<<"\n after deleting the node: ";
    list.display();
}