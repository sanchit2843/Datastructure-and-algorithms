#include <iostream>
#include <stdio.h>
#include<stdlib.h>
using namespace std;

void merge(int arr[] , int l , int r , int m)
{
  //create two temporary arrays
  int n1 = m-l+1;
  int n2 = r-m;
  int tempL[n1] , tempR[n2];
  // Copy content of main array in these temporary arrays
  for(int i=0;i<n1;i++)
  {
      tempL[i] = arr[l+i];
  }
  for(int i=0;i<n2;i++)
  {
      tempR[i] = arr[m+1+i];
  }

  // Merge two arrays
  int i=0;
  int j=0;
  int k = l;
  while(i<n1 && j<n2)
  {
    if(tempL[i]<=tempR[j])
    {
      arr[k] = tempL[i];
      i++;

    }
    else
    {
      arr[k] = tempR[j];
      j++;

    }
    k++;
  }
  while (i < n1)
    {
        arr[k] = tempL[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = tempR[j];
        j++;
        k++;
    }

}
void mergesort(int arr[] , int l , int r)
{
  if(l<r)
  {
    int m = (l+r-1)/2;
    mergesort(arr , l , m);
    mergesort(arr , m , r);
    merge(arr , l , r, m);
  }

}
int main()
{
int arr[10] = {1,3,5,9,1,2,8,7,5,9};
mergesort(arr , 0 , 9);
for(int i=0;i<10;i++)
{
cout<<arr[i];
}

}
