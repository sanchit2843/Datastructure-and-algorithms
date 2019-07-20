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
	    int max = -1;
	    for(int i=0;i<len;i++)
	    {
	        cin>>a[i];
	    }
	    int b[len];
	    int count = 0;
	    for(int i = len-1;i>=0;i--)
	    {
	        if(a[i]>max)
	        {
	            max = a[i];
	            b[count] = a[i];
	            count++;
	        }
	    }
	    for(int i=count-1;i>=0;i--)
	    {
	        cout<<b[i]<<' ';
	    }
	    cout<<endl;
	    
	}
	return 0;
}
