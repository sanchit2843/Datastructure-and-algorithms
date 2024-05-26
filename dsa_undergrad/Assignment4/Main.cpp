#include <iostream>
using namespace std;
struct Node
{
   int data;
   struct Node* next;
};
Node *head=NULL;
void insert(){

    int n;
    cout<<"enter num of ele\n";
    Node *link;
    cin>>n;
    cout<<"enter datas\n";
    while (n>0)
    {
        //Insert n nodes into the list
        link=new Node;
        if (head==NULL)
        {
            head=link;
        }
        cin>>link->data;
        link=link->next;
        n--;
    }
    link=NULL;

}
void display(){

    Node* tmp;
    tmp=head;
    while (tmp!=NULL)
    {
        cout<<tmp->data<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}

void inatb(){
    cout<<"enter data\n";
    int data;
    cin>>data;

    struct Node* x = new Node;

    x->data  = data;

    x->next = (head);

    (head) = x;

}
void inate(){
    int new_data;
    cout<<"enter data\n";
    cin>>new_data;

    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));

    struct Node *last = head;

    new_node->data  = new_data;

    new_node->next = NULL;

    if (head == NULL)
    {
       head = new_node;
       return;
    }

    while (last->next != NULL)
        last = last->next;

    last->next = new_node;
    return;

}
void inafter(){

    int data;
    cout<<"enter new data\n";
    cin>>data;
    int pre;
    cout<<"enter after what u want to enter\n";
    cin>>pre;
    Node* temp=head;
    while(temp->data!=pre && temp!=NULL){
        temp=temp->next;
    }

    if(temp==NULL){
        cout<<"data not found\n";
    }

    else{
        Node *x=new Node;
        x->data=data;
        x->next=temp->next;
        temp->next=x;
    }

}
void inbefore(){

    cout<<"enter dat\n";
    int data;
    cin>>data;
    cout<<"enter before which u want to enter\n";
    int pre;
    cin>>pre;
    Node* temp=head;
    while(temp->next->data!=pre && temp->next!=NULL){
        temp=temp->next;
    }
    if(temp->next==NULL){
        cout<<"not found\n";
    }
    else{
        Node *x=new Node;
        x->data=data;
        x->next=temp->next;
        temp->next=x;
    }
}
void atn(){

    int pos;
    cout<<"enter pos\n";
    cin>>pos;
    if(pos==1){
        inatb();
    }
    else{
        int data;
        cout<<"enter data\n";
        cin>>data;
        Node* x=head;
        pos=pos-2;
        while(pos--){
            x=x->next;
        }
        Node *x1=new Node;
        x1->data=data;
        x1->next=x->next;
        x->next=x1;
    }
}
void delatb(){

    Node *temp = head;
    head = head->next;

    delete temp;

}
void delate(){

    if (head->next == NULL)
    {
        head=NULL;
        return;
    }

    Node* second_last = head;
    while (second_last->next->next != NULL)
        second_last = second_last->next;

    delete (second_last->next);

    second_last->next = NULL;

}
void delafter(){

    int pre;
    cout<<"enter after what u want to enter\n";
    cin>>pre;
    Node* temp=head;
    while(temp->data!=pre && temp!=NULL){
        temp=temp->next;
    }
    temp->next=temp->next->next;

}
void delbefore(){

    cout<<"enter before which u want to enter\n";
    int pre;
    cin>>pre;
    Node* temp=head;
    while(temp->next->data!=pre && temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=temp->next->next;
}
void delatn(){

    int pos;
    cout<<"enter pos\n";
    cin>>pos;
    if(pos==1){
        delatb();
    }
    else{
        Node* x=head;
        pos=pos-2;
        while(pos--){
            x=x->next;
        }
        x->next=x->next->next;
    }
}
void search(){

    int data;
    cout<<"enter data\n";
    cin>>data;
    Node* temp=head;
    while(temp!=NULL){
        if(temp->data==data){
            cout<<"found\n";
            break;
        }
    }
    if(temp==NULL){
        cout<<"not found\n";
    }

void Insert_In_Sorted_Linked_List(node *&head,int d)
{
  	if(head->data>d)
  	{
      	Insert_at_Beginning(head,d);
      	return;
  	}
	node *temp =head;
	while(temp->next!=NULL && temp->next->data<d)
	{
    	temp = temp->next;
	}
	node *n = new node(d);
	node *temp2 = temp->next;
	temp->next = n;
	n->next = temp2;
}
void Delete_In_Sorted_Linked_List(node *&head,int d)
{
	if(head->data==d)
	{
    	Delete_at_Beginning(head);
    	return;
	}
	node *temp = head;
	while(temp->next->data!=d && temp!=NULL)
	{
    	temp = temp->next;
	}
	if(temp!=NULL)
	{
	node *temp2 = temp->next;
	temp->next = temp2->next;
	delete temp2;
	}
}
void Swap_First_Last_Data(node *head)
{   node *temp2 = head;
	node *temp = head;
	while(temp->next!=NULL)
	{
    	temp = temp->next;
	}
	int d = temp->data;
	temp->data = temp2->data;
	temp2->data = d;
}
void Print_Reverse_Order(node *head)
{
	if(head->next==NULL)
	{
    	cout<<head->data<<" ";
    	return;
	}
	Print_Reverse_Order(head->next);
	cout<<head->data<<" ";
}
node* reverserecursive(node *head)
{
	//base case
	if(head->next==NULL || head == NULL)
	return head;
	//recursive case
	node *smallhead = reverserecursive(head->next);
	node *c  = head;
	c->next->next = c;
	c->next = NULL;
	return smallhead;
}
void print(node *head)
{
	while(head!=NULL)
	{
    	cout<<head->data<<" ";
    	head = head->next;
	}
}

int main() {
  cout<<"Choose\na. \nb. \nc. \nd. \ne. \nf. \ng. \nh. \ni. \nj. \nk. \nl. \nm. \nn. \no.\np.\nq.\nr.\ns";
      char c;
      int t;
      while(t){
          cin>>c;
          if(c=='a'){
              insert();
          }
          if(c=='b'){
              display();
          }
          if(c=='c'){
              inatb();
          }
          if(c=='d'){
              inate();
          }
          if(c=='e'){
              inafter();
          }
          if(c=='f'){
              inbefore();
          }
          if(c=='g'){
              atn();
          }
          if(c=='h'){
              delatb();
          }
          if(c=='i'){
              delate();
          }
          if(c=='j'){
              delafter();
          }
          if(c=='k'){
              delbefore();
          }
          if(c=='l'){
              delatn();
          }
          if(c=='m'){
              search();
          }
          if(c=='n'){
            cout<<"Inserting 0 in the starting of the linked list\n";
              Insert_In_Sorted_Linked_List(head2,0);
              print(head2);
          }
          if(c=='o'){
            cout<<"\n";
            cout<<"Insering 4 and 8 midle and last\n";
            Insert_In_Sorted_Linked_List(head2,4);
            Insert_In_Sorted_Linked_List(head2,8);
            print(head2);

          }
          if(c=='p'){
            cout<<"\n";
            cout<<"Deleting 0 first 3 midle and 8 last element\n";
            Delete_In_Sorted_Linked_List(head2,0);
            Delete_In_Sorted_Linked_List(head2,3);
            Delete_In_Sorted_Linked_List(head2,8);
            print(head2);

          }
          if(c=='q'){
            cout<<"\n";
          	Swap_First_Last_Data(head2);
          	cout<<"Swapping last and first element\n";
          	print(head2);

          }
          if(c=='r'){
            	cout<<"\n";
            	cout<<"Printing the linked list Reverse order\n";
            	Print_Reverse_Order(head2);
            	cout<<"\nAcually reversing the linked list";


          }
          if(c=='s'){
            cout<<"\nAcually reversing the linked list";
          	node *head3 = reverserecursive(head2);
          	cout<<"\n";
          	print(head3);


            }
          cout<<"do u want to continue 0 if no 1 if yes\n";
          cin>>t;
      }


}
