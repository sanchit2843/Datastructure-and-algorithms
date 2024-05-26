#include <iostream>
#include <string.h>
using namespace std;

struct Node {
  int data;
  Node* head;
} ;

class Linkedlist
{
public:
  void Insert_at_Beginning(Node *&head,int data)
  {
    struct Node *n = new Node;
    n->data = data;
    n->head = head;
    head = n;
  }
  void display(Node *&head)
  {

      Node* tmp;
      tmp = head;
      while (tmp!=NULL)
      {
          cout<<tmp->data<<" ";
          tmp=tmp->head;
      }
      cout<<endl;
  }
};
int main()
{
Linkedlist b;

Node *head1 = NULL;
b.Insert_at_Beginning(head1 , 9);
b.Insert_at_Beginning(head1 , 6);
b.Insert_at_Beginning(head1 , 8);
b.Insert_at_Beginning(head1 , 3);
b.Insert_at_Beginning(head1 , 5);
b.Insert_at_Beginning(head1 , 6);
b.Insert_at_Beginning(head1 , 3);

Node *start = head1;
b.display(start);

int a[5];
int i=0;

while(start->head !=NULL)
{
  a[i] = start->data;
  i++;
  if(i%5==0)
  {
    i=0;
  }
    start = start->head;
}

if(i==0)
{
  cout<<a[3];
}
if(i==1)
{
  cout<<a[4];
}
if(i==2)
{
  cout<<a[0];
}
if(i==3)
{
  cout<<a[1];
}
if(i==4)
{
  cout<<a[2];
}
}
