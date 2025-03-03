#include <iostream>

using namespace std;

struct Node {
public:
    int value;
    Node *next;
};

class LinkedList
{
private:
    Node *head; //data of this struct

public:
    void Init()
    {
        head = NULL;            //inline definition of the operation
    }

    void InsertAtBeginning(int inserted_value); // we can also
    void InsertAtEnd(int inserted_value);//        put the definition outside
    int GetLength();
    void Print();
};

void LinkedList::InsertAtBeginning(int inserted_value) { // adding LinkedList:: in the beginning is necessary
    Node *p = new Node;
    p->value = inserted_value;
   
    p->next = head;
    head = p;
}

void LinkedList::InsertAtEnd(int inserted_value) { // adding LinkedList:: in the beginning is necessary
    Node *r = new Node;
    r->value = inserted_value;
    r->next = NULL;

    if (head == NULL)  // Case when the list is empty
    {
        head = r;
        return;
    }

    Node *p = head;
    while (p->next != NULL)
        p = p->next;

    p->next = r;  // Insert at the end
}

int LinkedList::GetLength()
{
    Node *p = head;
    int counter = 0;
   
    while (p != NULL)
    {
        counter++;
        p = p->next;
    }
   
    return counter;
}

void LinkedList::Print()
{
    Node *p = head;
   
    while (p != NULL)
    {
        cout << p->value << " ";
        p = p->next;
    }
   
    cout << endl;
}

int main()
{

    LinkedList L1;
    LinkedList L2;
    
    L1.Init();
    L1.InsertAtBeginning(20);
    L1.InsertAtBeginning(30);
    L1.InsertAtBeginning(40);

    L2.Init();
    L2.InsertAtBeginning(10);
    L2.InsertAtBeginning(70);
    L2.InsertAtBeginning(30);

    L1.Print();
    L2.Print();
    
    return 0;
}
