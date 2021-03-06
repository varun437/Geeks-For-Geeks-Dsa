   
// function should insert the data to the front of the list
struct Node* insert(struct Node *head, int data)
{
    Node *new_node=new Node(data);
    new_node->npx=XOR(head,NULL);
    
    if(head!=NULL)
    {
        Node *temp=XOR(head->npx,NULL);
        head->npx=XOR(new_node,temp);
    }
	head=new_node;
}

vector<int> printList (struct Node *head)
{
	Node *curr=head;
	Node *prev=NULL,*next=NULL;
	vector<int> v;
	while(curr!=NULL)
	{
	    v.push_back(curr->data);
	    next=XOR(prev,curr->npx);
	    prev=curr;
	    curr=next;
	}
	return v;
}
