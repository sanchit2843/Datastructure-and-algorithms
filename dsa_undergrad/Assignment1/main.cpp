//Sanchit Tanwar
//Ece 7
//101606144
#include <iostream>

using namespace std;
int create_array(int array1[100] , int len)
{
    for(int i=0;i<len;i++)
    {
        cout<<"Enter "<<i<<" element";
        cin>>array1[i];
    }
}
int print_array(int array1[],int len)
{

for(int i=0;i<len;i++)
    {
        cout<<array1[i];
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

int binary_search1(int arr[], int len, int element,int l=0 )
{

    if (len >= l) {
        int mid = l + (len - l) / 2;
        if (arr[mid] == element)
            {
            cout<< mid ;
            return mid;
            }
        if (arr[mid] > element)
            return binary_search1(arr, l, mid - 1, element);
        return binary_search1(arr, mid + 1, len, element);
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

int q10(int array1[],int len, int element)
{
    for(int i=0;i<len;i++)
        {
            if(array1[i]==element)
                {
                    q1(array1,i ,len);
                    print_array(array1,len-1);
                    return 0;
                }
        }
        cout<<"element not found";
        return 0;
}

int q11(int array1[],int len, int element)
{
    int len2 ;
    for(int i=0;i<len;i++)
        {
            len2 = len;

            if(array1[i]==element)
                {
                    q1(array1,i ,len);
                    len = len-1;
                    i = i-1;
                }

        }
            if(len<len2)
                return len;
        cout<<"element not found";
        return 0;
}

int q12(int array1[],int len)
{
    int  array3[10];
    for(int j=0;j<len;j++)
    {
        array3[j] = 0;
        for(int i=0;i<len;i++)
        {
            if(array1[i]==array1[j])
                {
                array3[j] = array3[j]+1;
                }
        }
    }

    int len2 = len;
    for(int i=0;i<len;i++)
        {
        if(array3[i]>1)
            {
                for (int j=0;j<len;j++)
                {
                    if(array1[j]==array1[i])
                    {
                        q1(array1,j,len);
                        q1(array3,j,len);
                        len = len-1;
                        j = j-1;
                        i = i-1;
                    }
                }
            }
        }

        return len;
}

int q13(int array1[] , int len)
{
    int sum=0;
    for (int i=0;i<len;i++)
    {
        sum = sum+array1[i];
    }
return sum;
}

int q14(int array1[] , int len )
{
    int array3[len];
    int count = 0;
   for(int j=0;j<len;j++)
    {
        int element = array1[j];
        int flag=0;
        for(int i=0;i<len;i++)
        {
            if(array1[i]== element)
                {
                flag++;
                }
        }
        if(flag>1)

            {
                array3[count] = array1[j];

                for(int i=0;i<len;i++)
            {
                if(array1[i] == array3[count])
                    {
                        q1(array1,i,len);
                        i = i-1;
                        len = len-1;
                    }
            }
                count++;
            }


    }

    return count;
}

int q15(int array1[] , int len ,int array3[])
{

    int count = 0;
   for(int j=0;j<len;j++)
    {
        int element = array1[j];
        int flag=0;
        for(int i=0;i<len;i++)
        {
            if(array1[i]== element)
                {
                flag++;
                }
        }
        if(flag==1)
            {
                array3[count] = array1[j];
                count++;
            }


    }

    return count;
}

int q17(int array1[] , int len, int array3[])
{
    for(int j=0;j<len;j++)
    {
        array3[j] = 0;
        for(int i=0;i<len;i++)
        {
            if(array1[i]==array1[j])
                {
                array3[j] = array3[j]+1;
                }
        }
    }
    return 0;

}

int q18(int array1[] , int array2[] , int len ,int array3[])
{
    int count = 0;
for(int i=0;i<len;i++)
{
    int flag =0 ;
    for(int j=0;j<len;j++)
        {
            if(array2[j]==array1[i])
            {
                array3[count] = array2[j];
                flag++;
            }
        }
        if(flag>0)
            count++;
}


    return count;
}

int q19(int array1[] ,int array2[] , int len)
{
    int len1 = len+len;
    q4(array1 , array2 , len , len);

    bubblesort(array1 , len1);
    for(int i=0 ; i<len1 ; i++)
    {
        int flag=0;
        for(int j=0 ; j<len1 ; j++)
        {
            if(array1[i]==array1[j])
            {
                flag++;
            }
        }
        if(flag>1)
            {
                q1(array1 ,i , len1);
                i = i-1;
                len1 = len1-1;
            }
    }
    return len1;
}

int q20 (int array1[],int len )
{
    int min2,max2;
    bubblesort(array1,len);
    min2 = array1[0];
    max2 = array1[len-1];
    cout<<"Minimum is:"<<min2<<endl;
    cout<<"Maximum is:"<<array1[len-1]<<endl;
}

int q21(int array1[] , int len , int array3[])
{
    int count=0;
    for(int i=0;i<len;i++)
        {
        if(array1[i]%2!=0)
            {
                array3[count] = array1[i];
                count++;
                q1(array1, i , len);
                len = len-1;
                i = i-1;
            }
        }
        cout<<"Odd array is:";
        print_array(array3 , count);
        cout<<"\nEven array is:";
        print_array(array1,len);
        return 0;
}
int main()
{
int array1[10] = {5,4,2,3,4};
int array2[10] = {2,4,6,7,4};
int  len = 5;
int  len2 = 7;
int array3[10];

//Q1. Write a program to delete an element from a specific position in the given array.

/*
create_array(len);
int len1 = q1(array1 , index , len);
print_array(array1 , len1);
*/

// Q2. Write a program to insert an element from a specific position in the given array.

/*

create_array(len);
int len1 = q2(array1 , index , len ,element);
print_array(array1 , len1);
*/

// Q3. Write a program to insert, delete from sorted one dimensional array
/*

create_array(len);
int len1 = q3(array1 , index , len ,element);
print_array(array1 , len1);

*/

// Q4. Write a program to merge two sorted arrays.

/*
q4(array1,array2 ,len1, len2);
*/

// Q5. Write a program to implement linear search, binary search.
/*
//Linear search:
linear_search(array1,element,len);

//Binary search
binary_search1(array1,len,element);
*/

// Q6. Write a program to implement bubble sort
/*
bubblesort(array1,len);
*/

//Q7. Write a program to find an occurrence of an element in a one dimensional array.

/*
q7(array1,len,element);
*/

// Q8. Write a program to find all occurrences of an element in a one dimensional array.
/*
q8(array1,len,element);
*/

// Q9. Write a program to find all occurrences of all unique elements in a one dimensional array.
/*
q9(array1,len,index,array3,j);
*/

// Q10. Write a program to remove the first occurrence of an element in a one dimensional array.
/*
q10(array1,len,element);
*/
// Q11. Write a program to remove all occurrences of an element in a one dimensional array.
/*
q11(array1,len,element);
*/

// Q12. Write a program that removes all duplicate elements from a one dimensional array.

/*
q12(array1,len);
*/

// Q13. Write a program to find the sum of all elements of the array.
/*
q13(array1,len);
*/

// Q14. Write a program to count a total number of duplicate elements in an array.
/*
q14(array1,len);
*/

// Q15. Write a program to print all unique elements in an array.
/*
q15(array1,len,array3);
*/

// Q17. Write a program to count the frequency of each element of an array.
//q17(array1,len,array3);

// Q18. Write a program to find intersection of two linear arrays and store the result in third array.
//  q18(array1,array2,len,array3);

// Q19. Write a program to find union of two linear arrays and store the result in third array
// q19(array1,array2,len);

// Q 20. Write a program to find the maximum and minimum element in an array.
// q20(array1,len);

// Q21. Write a program to separate odd and even integers in separate arrays
// q21(array1,len,array3);

return 0;
}
