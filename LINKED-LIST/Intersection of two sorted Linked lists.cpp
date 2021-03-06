Node* findIntersection(Node* head1, Node* head2)
{
    Node *head3=NULL;
    Node *temp=NULL;
    Node *temp1=head1;
    Node *temp2=head2;
    while(temp1 && temp2)
    {
        if(temp1->data==temp2->data)
        {
            Node *extra = new Node(temp1->data);
            if(head3==NULL)
            {
                temp=head3=extra;
            }
            else
            {
               temp->next=extra;
               temp=temp->next;
            }
            temp1=temp1->next;
            temp2=temp2->next;
        }
       else if(temp1->data<temp2->data)
             temp1=temp1->next;
       else
       temp2=temp2->next;
    }
    return head3;
}
