struct Node* partition(struct Node* head, int x) {
  
      if(head==NULL){
        return NULL;
    }
    Node *less=new Node(0); Node *dum1=less;
    Node *equal=new Node(0); Node *dum2=equal;
    Node *greater=new Node(0); Node *dum3=greater;
    
    Node *p=head;
    while(p!=NULL){
        if(p->data<x){ dum1->next=p;
            dum1=dum1->next;
        }
        else if(p->data==x){
            dum2->next=p;
            dum2=dum2->next;
        }
        else{
            dum3->next=p;
            dum3=dum3->next;
        }
        p=p->next;
    }
    if(dum2==equal && dum3==greater){
        dum1->next=NULL;
        return less->next;
    }
    if(dum2!=equal){
      dum1->next=equal->next;  
    }
    if(dum2!=equal && dum3!=greater){
       dum2->next=greater->next; 
    }
    else if(dum2==equal && dum3!=greater){
        dum1->next=greater->next;
    }
    else if(dum2!=equal && dum3==greater){
        dum2->next=NULL;
        return less->next;
    }
    dum3->next=NULL;
    return less->next;
  
    
/*    Node *small=NULL;
    Node *equal=NULL;
    Node *greater=NULL;
    Node *asmall=NULL,*aequal=NULL,*agreater=NULL;
    Node *curr=head;
    while(curr!=NULL)
    {
      if(curr->data<x)
      {
          if(small==NULL)
          small=asmall=curr;
          else
          {
              asmall->next=curr;
              asmall=asmall->next;
          }
      }
      else if(curr->data==x)
      {
           if(equal==NULL)
          equal=aequal=curr;
          else
          {
              aequal->next=curr;
              aequal=aequal->next;
          }
      }
      else
      {
           if(greater==NULL)
          greater=agreater=curr;
          else
          {
              agreater->next=curr;
              agreater=agreater->next;
          }
      }
      curr=curr->next;
  
    }
    
    agreater->next=NULL;
    aequal->next=greater;
    asmall->next=equal;
    
    return small;
    
    */
}
