class Solution{
  public:
  
   Node *reverse(Node *head)
   {
       Node *prev,*curr,*next;
       prev=NULL;
       curr=head;
       next=head;
       while(curr!=NULL)
       {
           next=next->next;
           curr->next=prev;
           prev=curr;
           curr=next;
       }
      return prev;
   }
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        Node *slow,*fast;
        slow=head;
        fast=head;
        while(fast!=NULL &&fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        
        slow=reverse(slow);
        fast=head;
        while(slow!=NULL)
        {
            if(fast->data!=slow->data)
              return false;
            slow=slow->next;
            fast=fast->next;
        }
        
        return true;
    }
}
