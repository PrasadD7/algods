#include<iostream>
#include<stdexcept>
using namespace std;
template <class T>
class CQueue{
	private:
		int front,rear,size;
		T *arr;
	public:
		CQueue();
		void insertQ(T ele);
		T deleteQ();

};
