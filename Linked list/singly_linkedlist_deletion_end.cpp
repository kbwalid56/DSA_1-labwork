
#include <iostream>
using namespace std;

class Node
{
public:
    int info;
    Node* next;

    Node(int info)
    {
        this->info = info;
        this->next = nullptr;
    }
};

int main()
{
    Node* head = new Node(5);
    head->next = new Node(7);
    head->next->next = new Node(9);
    head->next->next->next = new Node(10);
    head->next->next->next->next = new Node(10);

    // Display original list
    Node* temp = head;

    cout << "Original List: ";

    while (temp != nullptr)
    {
        cout << temp->info << " ";
        temp = temp->next;
    }

    cout << endl;

    // Deletion of last node
    if (head == nullptr)
    {
        cout << "List is empty!";
    }
    else if (head->next == nullptr)
    {
        delete head;
        head = nullptr;
    }
    else
    {
        Node* PTR = head;
        Node* PREPTR = nullptr;

        while (PTR->next != nullptr)
        {
            PREPTR = PTR;
            PTR = PTR->next;
        }

        PREPTR->next = nullptr;
        delete PTR;
    }

    // Display updated list
    temp = head;

    cout << "Updated List: ";

    while (temp != nullptr)
    {
        cout << temp->info << " ";
        temp = temp->next;
    }

    return 0;
}

