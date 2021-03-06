Node *swapkthnode(Node* head, int num, int K)
{
   Node*curr = head;
    Node*xprev=NULL,*yprev=NULL;
    Node*x=head,*y=head;
    int n=num-K+1;
    int i=1,j=1;
    
    if(K>num || K==0 || 2*K-1==num)
    return head;
    
    if(head==NULL)
    return NULL;
    
    while(curr)
    {
        if(i<K)
        {
            xprev = curr;
            x = curr->next;
        }
        if(j<n)
        {
            yprev = curr;
            y = curr->next;
            
        }
        curr = curr->next;
        i++;
        j++;
    }
  
    
    if(xprev)
    xprev->next = y;
    if(yprev)
    yprev->next = x;
   
    Node*temp = x->next;
    x->next = y->next;
    y->next = temp;;
  
   
    if(K==1)
    head=y;

    if(K==num)
    head=x;
    
    return head;
    
}
