#include<bits/stdc++.h>
using namespace std;

struct node{
   int data;
   struct node *next;
};

void reverse(struct node *head)
{
  // only to print reverse values
   struct node *x;
   x=head;
   if(x==NULL)
   return;
   reverse(x->next);
   cout<<x->data<<" ";

}

int main()
{
   int x=1;
   struct node *head=NULL,*newnode,*temp;
   while(x==1)
   {
   newnode=(struct node *)malloc(sizeof(struct node));
   cout<<"enter data";
   cin>>newnode->data;
   newnode->next=0;

   if(head==0)
   {
      head=temp=newnode;
   }
   else
   {
      temp->next=newnode;
      temp=newnode;
   }
  cout<<"do you want to enter one more:(0/1)";
  cin>>x;
   }
temp=head;

reverse(head);

return 0;
}
==========================
  // to reverse the nodes
class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
       struct Node *prev,*curr,*next;
       prev=NULL;
       curr=head;
       while(curr!=NULL)
       {
           next=curr->next;
           curr->next=prev;
           prev=curr;
           curr=next;
       }
       head=prev;
       return head;
    }
    
};
