#include<iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* left, *right;

    Node(int key)
    {
        data = key;
        left = nullptr;
        right = nullptr;
    }
};

int main()
{
    Node* firstNode = new Node(16);
    Node* secondNode = new Node(15);
    Node* thirdNode = new Node(18);
    Node* fourthNode = new Node(10);
    Node* fifthNode = new Node(12);
    Node* sixthNode = new Node(11);
    Node* seventhNode = new Node(19);

    // Connect binary tree nodes
    firstNode->left = secondNode;
    firstNode->right = thirdNode;

    secondNode->left = fourthNode;
    secondNode->right = fifthNode;

    thirdNode->left = sixthNode;
    thirdNode->right = seventhNode;

    return 0;
}
