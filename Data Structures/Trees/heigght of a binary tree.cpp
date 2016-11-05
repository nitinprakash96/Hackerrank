
/*The tree node has data, left child and right child 
class Node {
    int data;
    Node* left;
    Node* right;
};

*/

    int getHeight(Node* root) {
        // Write your code here.
        if(root == NULL) {
            return -1;
        } else {
            int leftHeight = getHeight(root->left);
            int rightHeight = getHeight(root->right);
            
            if(leftHeight > rightHeight)
                return leftHeight + 1;
            else
                return rightHeight + 1;
        }
    }
  
