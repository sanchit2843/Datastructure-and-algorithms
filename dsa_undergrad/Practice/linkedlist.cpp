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
  void Insert_at_end(Node *&head,int data)
  {
      struct Node *n = new Node;
      Node *tail = head;
      while(tail->head!=NULL)
      {

          tail = tail->head;
      }
      tail->head = n;
      n->data = data;
      n->head = NULL;
  }
  void Delete(Node *&head,int point)
  {
    int i=0;
    Node *tail = head;
    Node *next = head;
    while(i<point-1)
    {
        tail = tail->head;
        i++;
    }
    head = tail->head;
    delete tail;
  }
  void Insert_in_middle(Node *&head,int data , int point)
  {
      int i=0;
      struct Node *n = new Node;
      Node *tail = head;
      Node *next = head;

      while(i<point-1)
      {
          tail = tail->head;
          i++;
      }
      next = tail->head;
      tail->head = n;
      n->data = data;
      n->head = next;
}

    void reverse(Node *&head)
    {
        Node *next;
        Node *prev = NULL;
        Node *current = head;
        while(current!=NULL)
        {
            next = current->head;
            current->head = prev;
            prev =current;
            current = next;
        }
        head = prev;
    }

    bool compare_ll(Node *&head1, Node *&head2)
    {
      Node* tmp1;
      Node* tmp2;
      tmp1 = head1;
      tmp2 = head2;
      int len2 = 0;
      int len1=0;
      while (tmp2!=NULL)
      {
          tmp2=tmp2->head;
          len2++;
      }
      tmp2 = head2;
      while(tmp1!= NULL)
      {
        if(tmp1->data == tmp2->data)
        {
          tmp1 = tmp1->head;
          tmp2 = tmp2->head;
        }
        else
        {
          return false;
        }
        len1++;
      }
      if(len1==len2){
        return true;
      }
      else
      {
        return false;
      }
    }

};

int main()
{
Linkedlist a;

Node *head1 = NULL;
Node *head2 = NULL;
a.Insert_at_Beginning(head1 , 9);
a.Insert_at_Beginning(head1 , 6);
a.Insert_at_Beginning(head1 , 7);
a.display(head1);
a.Insert_at_Beginning(head2 , 9);
a.Insert_at_Beginning(head2 , 6);
a.Insert_at_Beginning(head2 , 7);
a.display(head2);
bool b = a.compare_ll(head1,head2);
cout<<b;

}
