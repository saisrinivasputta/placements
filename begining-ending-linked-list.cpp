class Solution{
  public:
    //Function to insert a node at the beginning of the linked list.
    Node *insertAtBegining(Node *head, int x) {
       Node* newnode = new Node(x);
        if(head==NULL)
        {
            head = newnode;     
        }
       else
       {
           newnode->next = head;
           head = newnode;
       }
       return head;
    }
    
    
    //Function to insert a node at the end of the linked list.
    Node *insertAtEnd(Node *head, int x)  {
       // Your code here
       Node* temp = head;
       Node* newnode = new Node(x);
       if(head==NULL)
       {
           head = newnode;
       }
       else
       {
        while(temp->next!=NULL)
        {
               temp=temp->next;
        }
        temp->next = newnode;
       }
       return head;
    }
};

