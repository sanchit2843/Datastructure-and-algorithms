#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

int main() {
	int n;
	cin>>n;
	while(n--)
	{
	    int m,n;
	    cin>>m;
	    cin>>n;
	    int a[m];
	    int b[n];
	    float c[m];
	    float d[n];
	    for(int i=0;i<m;i++)
	    {
	        cin>>a[i];
	        c[i] = log(a[i])/a[i];
	        
	    }
	    for(int i=0;i<n;i++)
	    {
	        cin>>b[i];
	        d[i] = log(b[i])/b[i];
	        
	    }
	    sort(c,c+m);
	    sort(d,d+n);
	    long long count = 0;
	    int index = 0;
	    for(int i=0;i<n;i++)
	    {
	        for(int j = index;j<m;j++)
	        {
	            if(c[j]>d[i])
	            {
	                index = j;
	                count = count-j+m;
	                break;
	            }
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
