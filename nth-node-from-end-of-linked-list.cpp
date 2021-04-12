//https://practice.geeksforgeeks.org/problems/nth-node-from-end-of-linked-list/1
int getNthFromLast(Node *head, int n)
{
        
        int count=0;
        Node*temp=head;
        while(temp!=NULL)
        {
            count++;
            temp=temp->next;
        }
        int index=count-n+1;
        if(index==1)
        {
           return head->data;
        }
        else
        {
           int count = 1;        
           Node*temp=head;
           while(temp!=NULL && count!=index)
           {
               count++;
               temp=temp->next;
           }
           if(temp==NULL)
           {
               return -1;
           }
           else
           {
               return temp->data;
           }
        }
}
