/* a Node of the doubly linked list
struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
  Node(int x) { data = x; next = prev = NULL; }
}; */
Node* insertAfterHead(Node* head, int data)
{
    if(head == NULL) return new Node(data);
    Node* temp = new Node(data);
    head->next->prev = temp;
    temp->next = head->next;
    
    temp->prev = head;
    head->next = temp;
    return head;
}
// Function to insert a new node at given position in doubly linked list.
class Solution {
  public:
    // Function to insert a new node at given position in doubly linked list.
    Node *addNode(Node *head, int pos, int data) {
        // code here
        if(head == NULL) return NULL;
        if(pos == 0) return insertAfterHead(head, data);
        
        Node* temp = head;
        int count = 0;
        while(temp != 0)
        {
            count++;
            if(count == pos + 1) break;
            temp = temp->next;
        }
        //Node* back = temp->prev;
        Node* n = new Node(data);
        n->next = temp->next;
        
        n->prev = temp;
        //back->next = n;
        if(temp->next != NULL)
        {
            temp->next->prev = n;
        }
        temp->next = n;
        
        return head;
        
    }
};