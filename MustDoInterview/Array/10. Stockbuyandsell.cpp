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
	    
	    int count = 0;
	    
	    //Descending
	    for(int i=0;i<l-1;i++)
	    {
	        if(a[i]>a[i+1])
	        {
	            count++;
	        }
	        else
	        {
	            break;
	        }
	    }
	    
	    if(count == (l-1) )
	    {
	        cout<<"No Profit"<<endl;
	        continue;
	    }
	    int count1 = 0;
	    
	    //ascending
	    for(int i = 0;i<l-1;i++)
	    {
	        if(a[i]<a[i+1])
	        {
	            count1++;
	        }
	        else
	        {
	            break;
	        }
	    }
	    
        if(count1>0 && count1!=l-1)
	    {
	        cout<<"(0"<<" "<<count1<<") ";
	        count1 = count1+1;
	        if(count1 == l-1)
	        {
	            cout<<endl;
	            continue;
	            
	        }
	    }
	    if(count1 == l-1)
	    {
            cout<<"(0"<<" "<<l-1<<") "<<endl;
            continue;
	    }
	    if(count == 0)
        {
            count = count1;
        }
       
       if(count1>0)
        {
           count1 = 0;
           for(int j=count;j<l-1;j++)
            {
                if(a[j]>a[j+1])
                    count1++;
                else
                    break;
            } 
        }
        int buy_day = count + count1;
        if(buy_day >= l-1)
        {
        
            cout<<endl;
            continue;
        }
        int sell_day = 0;
        int purc_flag = 1;
	    for(int i = buy_day+1;i<l;i++)
	    {
	        if(a[i]<a[buy_day] || a[i]<a[i-1])
	        {
	            sell_day = i-1;
	            cout<<"("<<buy_day<<" "<<sell_day<<") ";
	            buy_day = i;
	            count = 0;
	            
	            for(int j=buy_day;j<l-1;j++)
                {
                    if(a[j]>a[j+1])
                    {
                         count++;
                    }
                    else
                    {
                        break;
                    }
                }  
                
                if(count>0)
                {
                    buy_day = buy_day+count;
                    i = buy_day+1;
                }
                
                if(buy_day>= l-1)
                {
                    break;
                }
                sell_day = 0;
	            continue;
	        }
	        if(a[i]<a[buy_day])
	        {
	            buy_day = i;
	            continue;
	        }
	    }
	    if(buy_day != 0 && sell_day == 0)
        {
        cout<<"("<<buy_day<<" "<<l-1<<")";
        }
    
    cout<<endl;
	}           
	return 0;
}
