/*
  Insert Node at a given position in a linked list 
  head can be NULL 
  First element in the linked list is at position 0
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* InsertNth(Node *head, int data, int position)
{
  // Complete this method only
  // Do not write main function. 
       if (position == 0) {
        Node *temp = new Node();
        temp->data = data;
        temp->next = head;

        return temp;
    } else {
        head->next = InsertNth(head->next, data, --position);
        return head;
    }
}

