#include <iostream>
using namespace std;

struct Node
{
int data;
Node* left;
Node* right;
Node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};

Node* buildtree()
{
  int d;
  cin>>d;
  if(d==-1)
  {
    return NULL;
  }
  Node *root = new Node(d);
  root->left = buildtree();
  root->right = buildtree();
  return root;
}
void print(Node *root)
{
  if(root==NULL)
    return;
  cout<<root->data;
  print(root->left);
  print(root->right);
}

void printIN(Node *root)
{
  if(root==NULL)
    return;
  printIN(root->left);
  cout<<root->data;
  printIN(root->right);
}
void printPOST(Node *root)
{
  if(root==NULL)
    return;
  printPOST(root->left);
  printPOST(root->right);

  cout<<root->data;
}

int main()
{
  Node *root = buildtree();
  print(root);
  cout<<endl;
  printIN(root);
  cout<<endl;
  printPOST(root);

}
