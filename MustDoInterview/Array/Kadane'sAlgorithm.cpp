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
	    int cs = 0;
	    int ms = 0;
	    
	    for(int i = 0;i<l;i++)
	    {
	        cs = cs+a[i];
	        if(cs < 0)
	        {
	            cs = 0;
	        }
	        ms = max(cs,ms);
	    }
	    if(ms == 0)
	    {
	        ms = a[0];
	        for(int i=0;i<l;i++)
	        {
	            cs = a[i];
	            ms = max(cs,ms);
	        }
	    }
	    cout<<ms<<endl;
	}
	return 0;
}
