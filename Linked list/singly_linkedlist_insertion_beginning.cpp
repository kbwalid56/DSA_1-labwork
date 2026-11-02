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

    // Display before insertion
    Node* temp = head;

    cout << "Before insertion: ";

    while (temp != nullptr)
    {
        cout << temp->info << " ";
        temp = temp->next;
    }

    cout << endl;

    // Insertion at beginning
    int n;
    cout << "Enter Node to insert at beginning: ";
    cin >> n;

    Node* NEW = new Node(n);

    NEW->next = head;
    head = NEW;

    // Display after insertion
    temp = head;

    cout << "After insertion: ";

    while (temp != nullptr)
    {
        cout << temp->info << " ";
        temp = temp->next;
    }

    return 0;
}
