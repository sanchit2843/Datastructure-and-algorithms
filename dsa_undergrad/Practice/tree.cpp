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
Node *insertbst(Node *root, int data)
{
  if(root== NULL)
  {
    return new Node(data);
  }
  if(data<=root->data)
  {
    root->left = insertbst(root->left,data);
  }
  else
  {
    root->right = insertbst(root->right,data);
  }
  return root;
}

Node *build(Node *root)
{
  int d;
  cin>>d;
  while(d!=-1)
  {
    root = insertbst(root,d);
    cin>>d;
  }
  return root;
}

int findmax(Node *root)
{
  int max;
  if(root!=NULL)
  {
    int data = root->data;
    int left = findmax(root->left);
    int right = findmax(root->right);
    if(left>right)
      max = left;
    if(right>left)
      max = right;
    if(data>max)
      max = data;
    return max;
  }
}
int main()
{
  Node *root = build(root);

  printIN(root);
  int max = findmax(root);
  cout<<max<<endl;
}
