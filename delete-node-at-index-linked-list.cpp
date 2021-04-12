  
//https://practice.geeksforgeeks.org/problems/delete-a-node-in-single-linked-list/1#
Node* deleteNode(Node *head,int x)
{
    //Your code here
    int index=1;
    if(x==1)
    {
        if(head!=NULL)
        {
            head = head->next;
        }
    }
    else
    {
        Node*temp = head;
        Node*prev;
        while(temp!=NULL && index!=x)
        {
            index++;
            prev=temp;
            temp=temp->next;
        }
        if(temp==NULL)
        {
            return head;
        }
        else
        {
            prev->next = temp->next;
        }
    }
    return head;
}
