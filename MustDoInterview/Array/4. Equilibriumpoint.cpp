#include <iostream>
using namespace std;

int main() {
	//code
	int n;
	cin>>n;
	while(n--)
	{
	    int len;
	    cin>>len;
	    int a[len];
	    for(int i=0;i<len;i++)
	    {
	        cin>>a[i];
	    }
	    int s1=0;

	    for(int i=0;i<len;i++)
	    {
	        s1 = s1+a[i];
	    }
	    int right_sum = s1;
	    int left_sum = 0;
	    int flag = 0;
	    
	    for(int i=0;i<len;i++)
	    {
	        right_sum = right_sum-a[i];
	        
	        if(left_sum == right_sum)
	            {
	                flag = 1;
	                cout<<i+1<<endl;
	                break;
	            }
	       left_sum = left_sum+a[i];
	    }
	    if(flag==0)
	    {
	        cout<<-1<<endl;
	    }
	}
	return 0;
}
