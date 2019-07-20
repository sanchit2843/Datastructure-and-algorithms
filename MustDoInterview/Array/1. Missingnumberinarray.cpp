#include <iostream>
using namespace std;

int main() {
	int n;
    int l;
	cin>>n;
	while(n!=0)
	{

	    cin>>l;
	    int a[l];
	    int sum = 0;
	    for(int i=0;i<l-1;i++)
	    {
	        cin>>a[i];
	        sum = sum+a[i];
	    }
	    int sum1 = l*(l+1)/2;
	    cout<<sum1-sum;
	    cout<<"\n";
	    n = n-1;
	}
	return 0;
}
