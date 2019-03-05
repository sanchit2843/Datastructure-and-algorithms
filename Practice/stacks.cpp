#include <iostream>
using namespace std;

class Stack
{
public:
  int a[100];
  int top=0;
  void push(int data)
  {
    a[top] = data;
    top++;
    //cout<<"Data pushed"<<endl;
  }
  void pop()
  {
    top--;
  }
  int topelement()
  {
    return a[top];
  }
  void display()
  {
    for(int i=0;i<top;i++)
    {
      cout<<a[i]<<" ";
    }
  }
};
int main()
{
class Stack s;
s.push(10);
s.push(10);
s.push(30);
s.push(10);
s.push(40);
s.display();
s.pop();
s.display();

//s.display();
}
