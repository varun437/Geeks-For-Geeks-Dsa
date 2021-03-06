   
class Solution
{
    public:
    void rearrangeEvenOdd(Node *head)
    {
       Node *o=head;
       Node *even=head->next;
       Node *e=even;
       while(even!=NULL && even->next!=NULL)
       {
           o->next=o->next->next;
           even->next=even->next->next;
           o=o->next;
           even=even->next;
       }
       o->next=e;
    }
};
