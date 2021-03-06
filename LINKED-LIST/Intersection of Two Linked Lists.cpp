class Solution{
  public:
    Node* findIntersection(Node* head1, Node* head2)
    {
     /*  Node *temp1,*temp2,*temp3,*head3=NULL;
       temp1=head1;
       temp2=head2;
       while(temp1!=NULL)
       {
           while(temp2!=NULL)
           {
               if(temp1->data==temp2->data)
               {
                   if(head3==NULL)
                   {
                       head3=new Node(temp1->data);
                       temp3=head3;
                   }
                   else
                   {
                       temp3->next=new Node(temp1->data);
                       temp3=temp3->next;
                   }
               }
           }
       }
       return head3;
    }*/
    unordered_set<int> s;
    while(head2!=NULL)
    {
        s.insert(head2->data);
        head2=head2->next;
    }
    Node *head3=NULL,*temp=NULL;
    
    while(head1!=NULL)
    {
        if(s.find(head1->data)!=s.end())
        {
            if(head3==NULL)
            {
                temp=head3=head1;
            }
            else
            {
                temp->next=head1;
                temp=temp->next;
            }
        }
        head1=head1->next;
    }
    if(head3!=NULL)
    {
        temp->next=NULL;
    }
    return head3;
    }
    
};
