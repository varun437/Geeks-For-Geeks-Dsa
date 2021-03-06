#include<bits/stdc++.h>
using namespace std;

struct node{
   int data;
   struct node *next;
};


void remove(struct node *head,struct node *slow)
{
   node *s,*f;
   s=slow;
   f=head;
   while(s->next!=f->next)
   {
      s=s->next;
      f=f->next;
   }
   s->next=NULL;
   cout<<endl<<"loop removed";
}

void loop(struct node *head)
{
   node *slow,*fast;
   slow=fast=head;
   while(slow && fast && fast->next)
   {
      slow=slow->next;
      fast=fast->next->next;

      if(slow==fast)
      {
         remove(head,slow);
      }
   }


}


int main()
{
   int x=1,y;
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
temp->next=head;
loop(head);
return 0;
}
