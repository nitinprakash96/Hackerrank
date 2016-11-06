/*
Node is defined as 

typedef struct node
{
   int data;
   node * left;
   node * right;
}node;

*/


node * insert(node * root, int value) {
    if(root == NULL) {
        root = new node();
        root->data = value;
        root->left = NULL;
        root->right = NULL;
    }
    else if(root->data > value)
        root->left = insert(root->left, value);
    else if(root->data < value)
        root->right = insert(root->right, value);

        return root;
}

