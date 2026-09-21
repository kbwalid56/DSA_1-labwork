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

    Node* temp = head;

    while (temp != nullptr)
    {
        cout << temp->info << " ";

        temp = temp->next;
    }
}
