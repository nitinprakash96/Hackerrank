/* 
The structure of the node is

typedef struct node
{
    int freq;
    char data;
    node * left;
    node * right;
    
}node;

*/


void decode_huff(node * root,string s) {
    node *a;
    a = root;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '1'){
            root = root->right;
        }
        else{
            root = root->left;
        }
        if(root->right == NULL && root->left == NULL){
            printf("%c",root->data);
            root = a;
        }
    }
}

