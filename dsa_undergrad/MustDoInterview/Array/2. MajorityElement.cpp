#include <iostream>
using namespace std;
//Moore voting algorithm

int main() {
    int n;
    cin>>n;
    while(n--)
    {
        int len;
        cin>>len;
        int a[len];
        int b[len];
        int flag = 0;
        for(int i=0;i<len;i++)
        {
            cin>>a[i];
        }
        int maj_index = 0;
        int count = 1;
        for(int i=0;i<len;i++)
        {
            if(a[i]==a[maj_index])
                count++;
            else
                count--;
            if(count==0)
            {
                maj_index = i;
                count=1;
            }
        }
        count = 0;
        for(int i=0;i<len;i++)
        {
            if(a[i]==a[maj_index])
            {
                count++;
            }
        }
        if(count>len/2)
            cout<<a[maj_index]<<endl;
        else
            cout<<-1<<endl;
        
    }
	return 0;
}
