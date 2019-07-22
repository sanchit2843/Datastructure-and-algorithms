#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	while(n--)
	{
	    int l;
	    cin>>l;
	    int a[l];
	    for(int i=0;i<l;i++)
	    {
	        cin>>a[i];
	    }
	    int count0 = 0;
	    int count1 = 0;
	    int count2 = 0;
	    for(int i=0;i<l;i++)
	    {
	        if(a[i]==0)
	        {
	            count0++;
	        }
	        if(a[i]==1)
	        {
	            count1++;
	        }
	        if(a[i]==2)
	        {
	            count2++;
	        }
	    }
	    for(int i=0;i<l;i++)
	    {
	        if(count0>0)
	        {
	            a[i]=0;
            count0--;
                continue;
	        }
	        if(count0==0 && count1>0)
	        {
	            a[i] = 1;
	            count1--;
	            continue;
	        }
	        if(count0 == 0 && count1 == 0)
	        {
	            a[i] = 2;
	        }
	    }
	    for(int i = 0;i<l;i++)
	    {
	        cout<<a[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
