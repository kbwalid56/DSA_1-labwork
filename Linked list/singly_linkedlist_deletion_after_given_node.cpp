
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

    // Deletion after a given node
    int NUM;

    cout << "Enter node after which to delete: ";
    cin >> NUM;

    Node* PREPTR = head;
    Node* PTR = head;

    while (PTR != nullptr && PTR->info != NUM)
    {
        PREPTR = PTR;
        PTR = PTR->next;
    }

    if (PTR == nullptr)
    {
        cout << "Node not found!";
    }
    else if (PTR->next == nullptr)
    {
        cout << "No node exists after the given node!";
    }
    else
    {
        temp = PTR->next;
        PTR->next = temp->next;
        delete temp;
    }

    // Display updated list
    temp = head;

    cout << endl << "Updated List: ";

    while (temp != nullptr)
    {
        cout << temp->info << " ";
        temp = temp->next;
    }

    return 0;
}

