//https://practice.geeksforgeeks.org/problems/node-at-a-given-index-in-linked-list/1
int GetNth(struct node* head, int index){
  // Code here
  int index1=1;
  if(index==1)
  {
      if(head!=NULL)
      {
          return head->data;
      }
  }
  else
  {
     node* temp=head;
     while(temp!=NULL && index1!=index)
     {
         index1++;
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
