#include<iostream>
#include<stdexcept>
#include<cstdlib>
#define SIZE 100
using namespace std;
template <class T>
class Stack{
	private:
		int tos;
		T arr[SIZE];
	public:
		Stack():tos(-1){
		}

		bool isEmpty(){
		return (tos == -1);
		}

		bool isFull(){
		return tos==SIZE-1;
		}

		void push(T ele){
		if(isFull()){
		throw runtime_error("\nStack overflow");
		}
		arr[++tos]=ele;	
		}
		T pop(){
		if(isEmpty()){
			throw runtime_error("\nStack underflow");		
		}
		return arr[tos--]; 
		}

		T peep(){
		if(isEmpty()){
		throw runtime_error("\nStack underflow");
		}
		return arr[tos];
		}

};
/*int main(){
	Stack st;
	int ch;
	while(1){
	cout<<"\nEnter choice\n1:Push\n2:Pop\n3:Peep\n4:Exit\n";
	cin>>ch;
	switch(ch){
		case 1:
			int ele;
			cout<<"\nEnter element to be pushed\n";
			cin>>ele;
			st.push(ele);
			break;
		case 2:
			cout<<"\nPopped element is::"<<st.pop();
			break;
		case 3:
			cout<<"\nTop of stack is ::"<<st.peep();
			break;
		case 4:
			exit(0);
			break;
		default:
			cout<<"\nInvalid choice";
			break;
	}
	}
	return 0;
}*/
