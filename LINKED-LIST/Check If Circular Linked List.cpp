   
bool isCircular(Node *head)
{
   Node *temp=head;
  if(temp==NULL)
  return true;
  
  while(temp)
  {
      if(temp->next==head)
      return true;
      
      temp=temp->next;
  }
  return false;
}
