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

bool ifNodeExists(Node* root, int key)
{
    if(root == nullptr)
        return false;

    if(root->data == key)
        return true;

    bool res1 = ifNodeExists(root->left, key);

    if(res1)
        return true;

    bool res2 = ifNodeExists(root->right, key);

    return res2;
}

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

    int key = 11;

    if(ifNodeExists(firstNode, key))
        cout << "True";
    else
        cout << "false";

    return 0;
}

