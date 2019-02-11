int fibonacci(int n)
{
int a;
a = fibonacci(n-1) + fibonacci(n-2);
if(n==1)
{
return 1;
}
if(n==0)
{

return 0;
}
}
int main()
{
int a = 10;
cout<<fibonacci(a);
}
