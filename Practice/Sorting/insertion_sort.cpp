#include <iostream>
using namespace std;
void insertionsort(int array[10])
{
  for(int i=0;i<10;i++)
    {
      int j=i-1;
      int c;
      while(array[j+1]<array[j] && j>0)
      {

          c = array[j+1];
          array[j+1] = array[j];
          array[j] = c;
          j--;
      }
    }
}
int main()
{
int array[10] = {1,3,5,9,1,2,8,7,5,9};
for(int i=0;i<10;i++)
{
cout<<array[i];
}

insertionsort(array);
for(int i=0;i<10;i++)
{
cout<<array[i];
}
}
