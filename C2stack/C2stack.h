#include<iostream>
#include<stdexcept>
#include<cstdlib>
using namespace std;
template<class T>
class Stack{
	private:
		int tos0,tos1,SIZE;
		T *arr;
	public:
		Stack();
		bool isEmpty(int n);
		bool isFull(int n);
		void push(int n);
		T pop(int n);
		T peep(int n);
};
