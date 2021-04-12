  
//https://practice.geeksforgeeks.org/problems/finding-middle-element-in-a-linked-list/1
int getMiddle(Node *head)
{
   int length=0;
   Node*temp=head;
   while(temp!=NULL)
   {
       length++;
       temp=temp->next;
   }
   int count=0;
   if(length==0)
   {
       if(head!=NULL)
       {
           return head->data;
       }
   }
   else
   {
       Node*temp=head;
       while(temp!=NULL && count!=length/2)
       {
           count++;
           temp=temp->next;
       }
       if(count==length/2)
       {
           return temp->data;
       }
   }
}
