/*
  Get Nth element from the end in a linked list of integers
  Number of elements in the list will always be greater than N.
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int GetNode(Node *head,int positionFromTail)
{
  // This is a "method-only" submission. 
  // You only need to complete this method. 
    Node* result = head;
    Node* current = head;
    
    int index = 0;
    
    while(current != NULL) {
        current = current->next;
        if(index++ > positionFromTail)
            result = result->next;
    }
    return result->data;
    
    
}

