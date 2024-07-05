#include <iostream>
using namespace std;
class Node {
public:
    int data;
    Node* left;
    Node* right;
    explicit Node(int value){
        data = value;
        left = right = nullptr;
    }
};
void preOrderTree(Node* root){ // DLR
    if (root != nullptr){
        cout << root->data << " ";
        preOrderTree(root->left);
        preOrderTree(root->right);
    }
}
void inOrderTree(Node* root){ // LDR
    if (root != nullptr){
        inOrderTree(root->left);
        cout << root->data << " ";
        inOrderTree(root->right);
    }
}
void postOrderTree(Node* root){
    if (root != nullptr){
        postOrderTree(root->left);
        postOrderTree(root->right);
        cout << root->data << " ";
    }
}
Node* mirrorTree(Node* root){
    if (root == nullptr){
        return root;
    }
    Node* temp = root->left;
    root->left = root->right;
    root->right = temp;
    // Swap the left & right subtrees
    if (root->left){
        mirrorTree(root->left);
    }
    if (root->right){
        mirrorTree(root->right);
    }
    return root;
}
int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    root->left->right->left = new Node(9);
    root->right->right->left = new Node(15);
    // Traversals:
    cout << "PreOrder Traversal: " << endl;
    preOrderTree(root);
    cout << endl;
    cout << "InOrder Traversal: " << endl;
    inOrderTree(root);
    cout << endl;
    cout << "PostOrder Traversal: " << endl;
    postOrderTree(root);
    cout << endl;
    cout << "InOrder Original: " << endl;
    inOrderTree(root);
    cout << endl;
    root = mirrorTree(root);
    cout << "InOrder Mirror Tree: " << endl;
    inOrderTree(root);
    cout << endl;
    return 0;
}
