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
    next = tail->head;
    tail->head = next;
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
        Node *next = head;
        Node *prev = head;
        Node *first = head;
        next = next->head;
        while(first->head!=NULL)
        {
            next->head = prev->head;
            first = first->head;
            prev = prev->head;
        }
        first->head = NULL;
    }

};
int main()
{
Linkedlist a;

Node *head = NULL;
a.Insert_at_Beginning(head , 9);
a.Insert_at_Beginning(head , 6);
a.Insert_at_Beginning(head , 7);
a.Insert_at_end(head , 5);
a.Insert_at_Beginning(head , 8);
a.Insert_in_middle(head,12 , 3);
a.display(head);
a.reverse(head);
a.display(head);
}
