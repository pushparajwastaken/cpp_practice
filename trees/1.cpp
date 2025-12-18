#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

Node* createTree() {
    int data;
    cout << "Enter element (-1 for NULL): ";
    cin >> data;

    if (data == -1) {
        return NULL;
    }

    Node* root = new Node(data);

    cout << "Enter left child of " << data << endl;
    root->left = createTree();

    cout << "Enter right child of " << data << endl;
    root->right = createTree();

    return root;
}

int main() {
    Node* root = createTree();
    return 0;
}
