#include <iostream>
#include <queue>
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
int maxdepth(Node *root)
{
  if(root==NULL)
  {
    return 0;
  }
  else
  {
    int ldepth = maxdepth(root->left);
    int rdepth = maxdepth(root->right);
    if(ldepth>rdepth)
    {
      return (ldepth+1);
    }
    else
    {
      return (rdepth+1);
    }
  }
}
void bfs(Node *root)
{
  queue<Node*> q;
  q.push(root);
  while(!q.empty())
  {
    Node *f = q.front();
    cout<<f->data;
    if(f->left)
    {
      q.push(f->left);
    }
    if(f->right)
    {
      q.push(f->right);
    }
    q.pop();
  }
}
int diameter(Node *root)
{
    int l = maxdepth(root->left);
    int r = maxdepth(root->right);
    return (r+l-1);
}
int main()
{
  Node *root = buildtree();
  //print(root);
  //cout<<endl;
  //printIN(root);
  //cout<<endl;
  //printPOST(root);
  int a = maxdepth(root);
  cout<<endl;
  cout<<a;
  bfs(root);
  cout<<endl;

  cout<<diameter(root);
}
