//Take as input N, the size of array.
//Take N more inputs and store that in an array.
//Take as input M, a number.
//Write a recursive function which returns the last index at which M is
//found in the array and -1 if M is not found anywhere. Print the value returned.
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int search(int arr[] , int element , int length , int index)
{
if(arr[index]==element)
{
  return index;
}
if(index>length)
{
  return -1;
}
if(arr[length]==element)
{
  return length;
}
return search(arr,element,length,(index+1));
}
int main()
{
  int arr[5] = {10,20,3,4,30};
  int a = search(arr,30,5,0);
  cout<<a;
}
