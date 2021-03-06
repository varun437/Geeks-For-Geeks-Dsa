node *partition(struct node *head,struct node *tail)
{
    node *pivot=head;
    node *prev=head;
    node *cur=head->next;
    while(cur!=tail->next)
    {
        if(cur->data<pivot->data)
        {
            swap(prev->next->data,cur->data);
            prev=prev->next;
        }
        cur=cur->next;
    }
    swap(pivot->data,prev->data);
    return prev;
}


void quicksort(struct node *head,struct node *tail)
{
    if(head==tail || tail==NULL || head==NULL)
    return;
    struct node *pivot=partition(head,tail);
    quicksort(head,pivot);
    quicksort(pivot->next,tail);
}



void quickSort(struct node **headRef) {
  
  node *tail=*headRef;
  while(tail->next)
  {
      tail=tail->next;
  }
  quicksort(*headRef,tail);
  
}
