//find sum of series 1^1 + 2^2 + 3^3 ...+ n^n using recursion
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int sum_series(int n)
{

if(n==1)
{
  return 1;
}
return (pow(n,n) + sum_series(n-1));
}
int main()
{
  int n=3,sum;
  sum = sum_series(3);
  cout<<sum;
}
