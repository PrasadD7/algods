#include<iostream>
#include<cstdlib>
using namespace std;
#define Size 5
class Stack
{
	private:
		int tos;
		int arr[Size];
		public:
		Stack()
		{
			tos=-1;
		}
		bool isempty()
		{
			return tos==-1;
		}
	bool isfull()
	{
		return tos==Size-1;
	}
	void push(int e)

	{
	if (isfull())
	
		throw runtime_error("stack is full");
	tos=tos+1;
	arr[tos]=e;

	}
	int pop()
	{
	if(isempty())
	throw runtime_error("stack is empty");
	int e=arr[tos];
	tos--;
	return e;
}
 int peep()
	{
		if(isempty())
			throw runtime_error("stack is empty");
		return arr[tos];
		
	}
};
int main()
{

	Stack st;
	int ch;
	while(1)
	{
		cout<<"\nenter choice:\n1.push 2.pop 3.peep 4.exit";
		cin>>ch;
		switch (ch){ 
	  case 1:int a;
	  	cout<<"enter the no to be push??";
	  	cin>>a;
	    	st.push(a);
	    	break;
	  case 2:
	    cout<<st.pop();
	    break;
	  case 3:
	    cout<<st.peep();
	  	break;
	  case 4:
	    exit(0);
	 break;
default:
		    cout<<"invalid choice";
		    break;
  }
		
		
		}

}
