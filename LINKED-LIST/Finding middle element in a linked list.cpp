int getMiddle(Node *head)
{
   Node *slow,*fast;
   slow=fast=head;
   while(fast!=NULL && fast->next!=NULL)
   {
       slow=slow->next;
       fast=fast->next->next;
   }
   return slow->data;
}
