#include <iostream>

using namespace std;
int q1()
{
    int num[] = {5,3,6,8,3,2,1,5,7};
	stack<int>even;
	stack<int>odd;
	for(int i=0 ; i<10; i++)
	{
    	if(num[i]&1)
    	{
        	odd.push(num[i]);
    	}
    	else
    	{
           even.push(num[i]);
    	}
	}
	cout<<"even stack\n";
	while(!even.empty())
	{
    	cout<<even.top()<<" ";
    	even.pop();
	}
	cout<<"\nOdd Stack\n";
	while(!odd.empty())
	{
    	cout<<odd.top()<<" ";
    	odd.pop();
	}
return 0;
}
int q2()
{
    string s = "civic";
	int n = s.length();
	stack<char>ss;
	for(int i=0 ; i<n/2; i++)
	{
    	ss.push(s[i]);
	}
	int i;
	for(i=n/2 ; i<n; i++)
	{
    	if(s[i]==ss.top())
    	{
           ss.pop();
    	}
	}
	if(!ss.empty())
	{
    	cout<<"is not a palindrome";
	}
	else
	{
    	cout<<"is a palindrome";
	}
return 0;
}
int q3()
{
    string s = "{a+[f*d]/e +(s*z}";
	int n = s.length();
	stack<char>ss;
	for(int i=0 ; i<n; i++)
	{
    	if(s[i]=='{'|| s[i]=='(' || s[i]=='[')
    	{
        	ss.push(s[i]);
    	}
    	else if(s[i]==')' && ss.top()=='(')
    	{
        	ss.pop();
    	}
    	else if(s[i]=='}' && ss.top()=='{')
    	{
        	ss.pop();
    	}
    	else if(s[i]==']' && ss.top()=='[')
    	{
        	ss.pop();
    	}
	}
	if(!s.empty())
	{
    	cout<<"brackets not rightly ordered";
	}
	else
	{
    	cout<<"brackets rightly ordered";
	}
return 0;
}

void Reverese_stack_1_stack(stack<int>&s)
{
	stack<int>t;
	int n = s.size();
	int a;
	for(int i=0; i<n; i++)
	{
    	a = s.top();
    	s.pop();
    	for(int j=0; j<n-i-1 ; j++)
    	{
        	t.push(s.top());
        	s.pop();
    	}
    	s.push(a);
    	while(!t.empty())
    	{
        	s.push(t.top());
        	t.pop();
    	}
	}
}

int q4()
{
    stack<int>s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	Reverese_stack_1_stack(s);
	while(!s.empty())
	{
    	cout<<s.top()<<" ";
    	s.pop();
	}


	return 0;
}
void Remove_ith_element(stack<int>&s,int i)
{
	stack<int>t;
	while(!s.empty())
	{
    	t.push(s.top());
    	s.pop();
	}
	int j=1;
	while(!t.empty())
	{
    	if(j!=i)
    	{
        	s.push(t.top());
    	}
    	j++;
    	t.pop();
	}
}
int q5()
{
    stack<int>s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	Reverese_stack_1_stack(s);
	while(!s.empty())
	{
    	cout<<s.top()<<" ";
    	s.pop();
	}

}

int q6()
{
    string s = "ALPHABETS";
	int n = s.length();
	stack<char>vowels;
	stack<char>consonants;
	for(int i=0; i<n; i++)
	{
    	if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
    	{
        	vowels.push(s[i]);
    	}
    	else
    	{
        	consonants.push(s[i]);
    	}
	}
	cout<<"Vowels\n";
	while(!vowels.empty())
	{
    	cout<<vowels.top()<<" ";
    	vowels.pop();
	}
	cout<<"\nConsonants\n";
while(!consonants.empty())
	{
    	cout<<consonants.top()<<" ";
    	consonants.pop();
	}

}


class Queue
{   int *arr;
	int left;
	int right;
	int Max_Size;
	public:
	Queue(int size =10)
	{
    	arr =  new int[size];
    	left =-1;
       right =-1;
       Max_Size = size;
	}
	int Front()
	{
    	return arr[left];
	}
	bool empty()
	{
    	return left==-1;
	}
	void pop()
	{   if(left==right)
    	{left =-1;
    	right =-1;
    	}
    	else{
    	left = (left+1)%Max_Size;
    	}
	}
	void push(int d)
	{
    	if(right-left!=-1)
    	{
           right = (right+1)%Max_Size;
        	arr[right] = d;
    	}
	}
	int count()
	{   if(left==-1)
	{
    	return 0;
	}
    	int i =left;
    	int count =0;
    	while(right-i!=-1)
    	{
        	if(i==Max_Size-1)
        	{
            	i=0;
            	count++;
        	}
        	else
        	{
            	i+=1;
            	count++;
        	}
    	}
	return count-1;
	}
};
int Q1()
{

    Queue q(10);
	q.push(1);
	q.push(2);
	q.push(3);
	cout<<q.count()<<endl;
	cout<<"after poping one element\n";
	q.pop();
	cout<<q.count();

}
void reverseQueue(queue<int>&q)
{
	if(q.empty())
	{
    	return;
	}
	int a = q.front();
	q.pop();
	reverseQueue(q);
	q.push(a);
}
int Q2()
{
    queue<int>Q;
	for(int i=1; i<=10 ; i++)
	{
    	Q.push(i*i);
	}
	reverseQueue(Q);
	while(!Q.empty())
	{
    	cout<<Q.front()<<" ";
    	Q.pop();
	}

}

void Queue_Using_2_Stack(stack<int>&s)
{
	stack<int>t;
	int n = s.size();
	int a;
	for(int i=0; i<n; i++)
	{
    	a = s.top();
    	s.pop();
    	for(int j=0; j<n-i-1 ; j++)
    	{
        	t.push(s.top());
        	s.pop();
    	}
    	s.push(a);
    	while(!t.empty())
    	{
        	s.push(t.top());
        	t.pop();
    	}

	}
}

int Q5()
{
    void Queue_Using_2_Stack(stack<int>&s)
{
	stack<int>t;
	int n = s.size();
	int a;
	for(int i=0; i<n; i++)
	{
    	a = s.top();
    	s.pop();
    	for(int j=0; j<n-i-1 ; j++)
    	{
        	t.push(s.top());
        	s.pop();
    	}
    	s.push(a);
    	while(!t.empty())
    	{
        	s.push(t.top());
        	t.pop();
    	}

	}
}
return 0;
}
int main()
{
    //stacks
    //q1();
    //q2();
    //q3();
    //q4();
    //q5();
    //q6();
    //queues
    //Q1();
    //Q2();
    // Q5();
        return 0;
}
