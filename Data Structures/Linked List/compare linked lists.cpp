/*
  Compare two linked lists A and B
  Return 1 if they are identical and 0 if they are not. 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int CompareLists(Node *headA, Node* headB)
{
  // This is a "method-only" submission. 
  // You only need to complete this method 
while(headA != NULL && headB != NULL) {
    if(headA->data != headB->data)
        return false;
    headA = headA->next;
    headB = headB->next;
    }
    return (headA == NULL && headB == NULL);
}

