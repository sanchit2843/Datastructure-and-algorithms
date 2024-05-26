#include <iostream>

using namespace std;

int q1()
{
    int n,m;
    cout<<"Enter dimension of matrix"<<endl;
    cin>>n;
    int array1[100][100];
    cout<<"Enter array "<<endl;
    for(int i=0;i<n;i++)
        {
        for(int j=0;j<n;j++)
            {
            cin>>array1[i][j];
            }
        }
    //print diagonal matrix
    for(int i=0;i<n;i++)
        {
        for(int j=0;j<n;j++)
            {
            if(i==j)
                {
                cout<<array1[i][j];
                }
            }
        }
        return 0;
}
int q2()
{
    int n,m;
    cout<<"Enter dimension of matrices"<<endl;
    cin>>n;
    cin>>m;
    int array1[100][100];
    int array2[100][100];
    cout<<"Enter matrix 1 "<<endl;
    for(int i=0;i<n;i++)
        {
        for(int j=0;j<m;j++)
            {
            cin>>array1[i][j];
            }
        }

    cout<<"Enter matrix 2"<<endl;
    for(int i=0;i<n;i++)
        {
        for(int j=0;j<m;j++)
            {
            cin>>array2[i][j];
            }
        }
    for(int i=0 ; i<n ; i++)

        {
            int sum = 0;
        for(int j=0;j<m;j++)
            {
                sum = array1[i][j] + array2[i][j];
                cout<<sum<<" ";
            }
            cout<<endl;
        }
return 0;
}
int q3()
{
    int n1,m1,n2,m2;
    cout<<"Enter dimension of matrix 1"<<endl;
    cin>>n1;
    cin>>m1;
    cout<<"Enter dimension of matrix 2"<<endl;
    cin>>n2;
    cin>>m2;
    int array1[100][100];
    int array2[100][100];
    if(n1!=m2)
        {
        cout<<"Invalid dimensions";
        return 0;
        }
    cout<<"Enter matrix 1"<<endl;
    for(int i=0;i<n1;i++)
        {
        for(int j=0;j<m1;j++)
            {
            cin>>array1[i][j];
            }
        }

    for(int i=0;i<n2;i++)
        {
        for(int j=0;j<m2;j++)
            {
                cin>>array2[i][j];

            }
        }

    for(int i = 0; i < n1; ++i)
    {
        for(int j = 0; j < m2; ++j)
        {
            int mult = 0;
            for(int k = 0; k < m1; ++k)
            {
                mult += array1[i][k] * array2[k][j];
            }
            cout<<mult<<" ";

    }
    cout<<endl;
    }
        return 0;
}

int q4()
{
    int n,m;
    cout<<"Enter dimension of matrix 1"<<endl;
    cin>>n1;
    cin>>m1;
    cout<<"Enter dimension of matrix 2"<<endl;
    cin>>n2;
    cin>>m2;
    int array1[100][100];
    int array2[100][100];
    if(n1!=m2)
        {
        cout<<"Invalid dimensions";
        return 0;
        }
    cout<<"Enter matrix 1"<<endl;
    for(int i=0;i<n1;i++)
        {
        for(int j=0;j<m1;j++)
            {
            cin>>array1[i][j];
            }
        }

    for(int i=0;i<n2;i++)
        {
        for(int j=0;j<m2;j++)
            {
                cin>>array2[i][j];

            }
        }

    for(int i = 0; i < n1; ++i)
    {
        for(int j = 0; j < m2; ++j)
        {
            int mult = 0;
            for(int k = 0; k < m1; ++k)
            {
                mult += array1[i][k] * array2[k][j];
            }
            cout<<mult<<" ";

    }
    cout<<endl;
    }
        return 0;
}
int q5()
{
int n;
    cout<<"Enter dimension of matrix"<<endl;
    cin>>n;
    int array1[100][100];
    cout<<"Enter matrix "<<endl;
    for(int i=0;i<n;i++)
        {
        for(int j=0;j<n;j++)
            {
            cin>>array1[i][j];
            }
        }
for(int i=0 ; i<n ; i++)
{
for(int j=i+1; j<n ; j++)
{
swap(array1[i][j],array1[j][i]);
}
}
for(int i=0 ; i<n ; i++)
{
for(int j=0; j<n ; j++)
{
cout<<array1[i][j]<<" ";
}
cout<<"\n";
}
}

int q6()
{

int n;
    cout<<"Enter dimension of matrix"<<endl;
    cin>>n;
    int array1[100][100];
    cout<<"Enter matrix "<<endl;
    for(int i=0;i<n;i++)
        {
        for(int j=0;j<n;j++)
            {
            cin>>array1[i][j];
            }
        }

int sum = 0;
int j=0;
for(int i=n-1 ; i>=0 ; i--)
{
sum+=array1[i][j];
j++;
}
cout<<sum;
}

int q7()
{
    int n;
    cout<<"Enter dimension of matrix"<<endl;
    cin>>n;
    int array1[100][100];
    cout<<"Enter matrix "<<endl;
    for(int i=0;i<n;i++)
        {
        for(int j=0;j<n;j++)
            {
            cin>>array1[i][j];
            }
        }

int dia[10];
int k=0;
for(int i=0 ; i<n ; i++)
{
for(int j=0 ; j<n ; j++)
{
if(i==j || (i+j)==n-1)
dia[k++] = array1[i][j];
}
}
cout<<"tri Diagonal elements"<<endl;
for(int i=0 ; i<k; i++)
{
cout<<dia[i]<<" ";
}
int upper[10];
k=0;
for(int i=0 ; i<n ; i++)
{
for(int j=0 ; j<n ; j++)
{
if(i<=j)
upper[k++] = array1[i][j];
}
}
cout<<"\nUpper Triangle elements"<<endl;
for(int i=0 ; i<k; i++)
{
cout<<upper[i]<<" ";
}
int lower[10];
k=0;
for(int i=n-1 ; i>=0 ; i--)
{
for(int j=n-1 ; j>=0 ; j--)
{
if(i>=j)
lower[k++] = mat[i][j];
}
} cout<<"\nLower Triangle elements"<<endl;
for(int i=0 ; i<k; i++)
{
cout<<lower[i]<<" ";
}

}

int partition(int *a,int s,int e)
{

int pivot = a[e];
int i = s-1;

for(int j = s ; j<e ; j++)
{
if(a[j]<=pivot)
{ i++;
swap(a[i],a[j]);
}
}

swap(a[i+1],a[e]);
return i+1;
}

void quick_sort(int *a,int s, int e)
{
if(s>=e)
return;
int p = partition(a,s,e);
quick_sort(a,s,p-1);
quick_sort(a,p+1,e);
}

int q9(int a, int s , int e)
{
quick_sort(a,0,7);
for(int i=0 ; i<=7; i++)
printf("%d\n",a[i]);
return 1;
}

void q10(string starting,string middle, string final,int n)
{
if(n==1)
{
cout<<starting<<"->"<<final<<endl;
}
else
{
q10(starting,final,middle,n-1);
cout<<starting<<"->"<<final<<endl;
q10(middle,starting,final,n-1);

}
}

int q11(int *arr,int i,int len)
{
if(i==len)
{
return arr[i];
}
int max1 = arr[i];
int max2 = maximum(arr,i+1,len);
return max(max1,max2);
}


int Binary_Search(int *arr,int i,int len,int key)
{
if(i>len)
{
return -1;
}
int mid = (i+len)/2;
if(arr[mid]==key)
{
return mid;
}
if(key<arr[mid])
{
Binary_Search(arr,i,mid-1,key);
}
else if(key>arr[mid])
{
Binary_Search(arr,mid+1,len,key);
}
}


int q13(char *ch)
{
if(*ch=='\0')
{
return 0;
}
else
{
return 1+q13(ch+1);
}
}

int q14(int x,int n)
{
if(n==0)
{
return 1;
}
else
{
return x*pow(x,n-1);
}
}


int main()
{
    // Q1. WAP to read a matrix and print Diagonals.
    //q1();

    // Q2. WAP to find sum of two matrices
    //q2();

    // Q3. WAP to find product of two matrices
    //q3();

    // Q4. WAP to print row-wise sum /column wise of elements
    //q4();

    // Q5. WAP to find Transpose a Matrix.
    //q5();

    // Q6. WAP to find sum of right diagonals of a matrix.
    //q6();

    // Q7. WAP to store/access upper triangular/lower triangular/tri diagonal matrix as linear array.
    // q7();

    // Q8. Write a program to perform following operations on stack.

    // Q9. Write two different (recursive and non-recursive) functions to implement quick sort.
    // q9(a,0,5);

    // Q10. Write recursive function to solve towers of Hanoi.
    //q10("Staring","Middle","Final",3);

    // Q11. C Program to find the Biggest Number in an Array of Numbers using Recursion
    // q11(a, 0 ,7);

    // Q12. WAP to implement binary search in linear array using recursion.
    // Binary_Search(a,0,7,5);

    // Q13. WAP to find string length using recursion.

    // cout<<q13(a);

    // Q14. WAP to find power(x,n) using recursion.
    //q14(2,1);
    return 0;
}
