
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

    // Insertion after given node
    int n, NUM;

    cout << "Enter Node to insert: ";
    cin >> n;

    cout << "Enter node after which to insert: ";
    cin >> NUM;

    Node* NEW = new Node(n);

    Node* PTR = head;

    while (PTR != nullptr && PTR->info != NUM)
    {
        PTR = PTR->next;
    }

    if (PTR == nullptr)
    {
        cout << "Node not found!";
        delete NEW;
    }
    else
    {
        NEW->next = PTR->next;
        PTR->next = NEW;
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

