/*
  Reverse a linked list and return pointer to the head
  The input list will have at least one element  
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Reverse(Node *head)
{
  // Complete this method
    if(head == NULL || head->next == NULL) return head;
    else {
        Node *preNode = NULL;
        Node *currNode = head;
        Node *nextNode = NULL;
        
        while(currNode != NULL) {
            nextNode = currNode->next;
            currNode->next = preNode;
            preNode = currNode;
            currNode = nextNode;
        }
        head = preNode;
    }
    return head;
}
