#include"C2stack.h"
		template<class T>
		C2stack <T>::Stack(){
			cout<<"\nEnter size of complete stack";
			cin>>SIZE;
				tos1=0;
				tos0=SIZE;
				arr = new T[SIZE];
		}
		template<class T>
		C2stack ::Stack(){
		bool C2stack <T>:: isEmpty(int n){
		return ((n==0)?(tos0==SIZE):(tos1==0));
		}
		template<class T>
		C2stack<T> ::Stack(){

		bool C2stack <T>::isFull(int n){
		return (tos0-tos1==0);
		}

		template<class T>
		C2stack <T>::Stack(){
		void C2stack <T> ::push(int n){
			T ele;
			cout<<"\nEnter element to be pushed\n";
                        cin>>ele;
		if(isFull(n)){
		throw runtime_error("\nStack overflow");
		}
		if(n==0)
			arr[tos0--] = ele;
		else
			arr[tos1++] = ele;
		}

		template<class T>
		C2stack <T>::Stack(){
		T C2stack::pop(int n){
		if(isEmpty(n)){
			throw runtime_error("Stack underflow");		
		}
		return ((n==0)?arr[tos0++]:arr[tos1--]); 
		}

		template<class T>
		C2stack<T> ::Stack(){
		T C2stack::peep(int n){
		if(isEmpty(n)){
		throw runtime_error("Stack underflow");
		}
		if(n==0)
			return (arr[tos0+1]);
		return (arr[tos1-1]);
		}
};
class 
