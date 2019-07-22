#include <iostream>
#include <unordered_map> 
using namespace std;

int main() {
    unordered_map<int, int> umap; 
 
    int n;
    cin>>n;
    while(n--)
    {
        int index1 = 0;
        int index2 = 0;
        int l,s;
        cin>>l>>s;
        int a[l];
        for(int i=0;i<l;i++)
        {
            cin>>a[i];
        }
        int cur_sum = a[0];
        int flag = 0;
        for(int i=1;i<l;i++)
        {
            if(cur_sum == s)
            {
                index2 = i;
                flag = 1;
                break;
            }
            
            cur_sum += a[i];
            while(cur_sum>s)
            {
                cur_sum -=a[index1];
                index1++;
            }
        }
        if(flag == 1)
        {
        cout<<index1+1<<" "<<index2<<endl;
        }
        else if(cur_sum==s & flag==0)
        {
            cout<<index1+1<<" "<<l<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
	return 0;
}
