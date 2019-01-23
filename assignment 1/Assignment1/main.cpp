#include <iostream>

using namespace std;

int print_array(int array1[],int len)
{

for(int i=0;i<len;i++)
    {
        cout<<array1[i]<<endl;
    }
return 0;
}

int q1(int array1[],int index , int len)
{
for(int i=0;i<len-1;i++)
{

    if(i>=index)
        {
         array1[i] = array1[i+1];
        }

}
return (len-1);
}
int q2(int array1[],int index,int len,int element)
{
for(int i=0;i<len+1;i++)
    {
        if(i>=index)
            {
            int temp = array1[i];
            array1[i] = element;
            element  = temp;
            }
    }
    return (len+1);
}

void bubblesort(int a[] , int n)
{
for(int i=1;i< n;++i)
{
for(int j=0;j <(n-i);++j)
if(a[j] > a[j+1])
{
int temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}

int q3(int array1[] , int len , int index , int element = -1)
{
bubblesort(array1,len);
    if(element== -1)
    {
        q1(array1,index,len);
        return (len-1);
    }
    else
    {
        q2(array1,index,len,element);
        return (len+1);
    }
}

int q4(int array1[], int array2[] , int len1 , int len2)
{

    for(int i = len1 ; i<len1+len2 ; i++)
    {
        array1[i] = array2[i-len1];
    }
    return (len1 + len2);

}

int linear_search(int array1[], int element , int len)
{
for(int i=0;i<len;i++)
    {
        if(array1[i] == element)
            {
                cout<<i;
                return i;
            }
        else
            continue;
    }
    cout<<"not found";
    return 0;
}

int binary_search1(int arr[], int l, int r, int x)
{

    if (r >= l) {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x)
            {
            cout<< mid ;
            return mid;
            }
        if (arr[mid] > x)
            return binary_search1(arr, l, mid - 1, x);
        return binary_search1(arr, mid + 1, r, x);
    }
    cout<<"not found";
    return -1;
}
int q7(int array1[],int len, int element)
{
    int count = 0;
for(int i=0;i<len;i++)
    {
        if(array1[i]==element){
            cout<<i;
            return i;
            }
    }
cout<<"not found";
return 0;

}
int q8(int array1[],int len , int element)
{
    int array3[10];
    int j=0;
    for(int i=0;i<len;i++)
    {
        if(array1[i]==element)
            {
            array3[j] == i;
            j++;
            }
    }
    print_array(array3,j);
    return 0;
}
int q9(int array1[],int len , int index , int array3[] , int j)
{
    if(index<len)
    {

    for(int i = 0;i<len;i++)
        {

            if(array1[i]==array1[index] && i!=index)
            {
                index = index+1;
                return q9(array1,len,index , array3 , j);
            }

            if(i==len-1)
                {
                array3[j] = index;
                index++;
                j++;
                }
        }

            index = index+1;
            return q9(array1,len,index , array3 , j);
    }
    print_array(array3 , j);
    return 0;
}
int main()
{
int array1[10] = {5,4,2,3,4};
int array2[10] = {2,4,6,7,4};

int n = 4;
int  len = 5;
int  len2 = 7;
int array3[10];

q9(array1,len,0 , array3,0);
    return 0;
}
