#include <iostream>
using namespace std;
void bubblesort(int array[10])
{
 int flag = 1;
 for(int j=0;j<10;j++)
 {
   int c;
   for(int i=0;i<10-j;i++)
   {
      flag=0;
      if(array[i]>array[i+1])
        {
          c = array[i];
          array[i] = array[i+1];
          array[i+1] = c;
          flag++;
        }
   }
   if(flag>0)
   {
     return;
   }

 }
}
int main()
{
int array[10] = {1,3,5,9,1,2,8,7,5,9};
bubblesort(array);
for(int i=0;i<10;i++)
{
cout<<array[i];
}
}
