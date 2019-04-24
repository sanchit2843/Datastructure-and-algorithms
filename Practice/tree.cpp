#include <iostream>
using namespace std;

class node
{
public:
  int d;
  node*left;
  node*right;

  node(int d)
  {
    data = d;
    left = NULL;
    right = NULL;
  }
};

node *buildtree(int d)
{
  if(d == -1)
  {
    return NULL;
  }
  root = new node(d);
  root->left = buildtree(root->left);
  root->right = buildtree(root->right);

}
