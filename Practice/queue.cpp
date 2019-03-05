#include <iostream>
using namespace std;

class queue
{
public:
  int a[100];
  int top = 0;
  int last = 0;
  void push(int data)
  {
    a[top] = data;
    top++;
  }
  void pop()
  {
    last++;
  }
  int topelement()
  {
    return a[top];
  }
  void display()
  {
    for(int i=last;i<top;i++)
    {
      cout<<a[i]<<" ";
    }
  }
};
int main()
{
class queue s;
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
