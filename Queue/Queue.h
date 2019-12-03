#include<iostream>
#include<stdexcept>
using namespace std;
template <class T>
class Queue{
	private:
		int size;
		T *arr;
		int front;
		int rear;
	public:
		Queue();
		void insertQ(T ele)throw(runtime_error);
		void deleteQ()throw(runtime_error);
		void display();
		bool isFull();
		bool isNull();
};
