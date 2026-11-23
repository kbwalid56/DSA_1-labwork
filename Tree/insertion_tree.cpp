#include<iostream>
#include<queue>
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

Node* InsertNode(Node* root, int data)
{
    if(root == nullptr)
    {
        root = new Node(data);
        return root;
    }

    queue<Node*> q;
    q.push(root);

    while(!q.empty())
    {
        Node* curr = q.front();
        q.pop();

        if(curr->left != nullptr)
            q.push(curr->left);
        else
        {
            curr->left = new Node(data);
            return root;
        }

        if(curr->right != nullptr)
            q.push(curr->right);
        else
        {
            curr->right = new Node(data);
            return root;
        }
    }
}

// Inorder traversal of binary tree
void inorder(Node* curr)
{
    if(curr == nullptr)
        return;

    inorder(curr->left);
    cout << curr->data << " ";
    inorder(curr->right);
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

    int key = 12;

    firstNode = InsertNode(firstNode, key);
    inorder(firstNode);

    return 0;
}

