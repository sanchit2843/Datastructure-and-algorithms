#include <iostream>
using namespace std;
void selectionsort(int array[10])
{
  for(int i=0;i<10;i++)
  {
    int min = array[i];
    int min_index = i;
    for(int j=i+1;j<10;j++)
    {
      if(array[j]<min)
      {
        min = array[j];
        min_index = j;
      }
    }
    int c = array[i];
    array[i] = array[min_index];
    array[min_index] = c;
  }
}
int main()
{
int array[10] = {1,3,5,9,1,2,8,7,5,9};
selectionsort(array);
for(int i=0;i<10;i++)
{
cout<<array[i];
}
}
