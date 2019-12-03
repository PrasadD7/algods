#include<iostream>
using namespace std;
template <class T>
class Node{
	private:
		T data;
		Node *next;
	public:
		Node *getNext();
		T getData();
		void setData(T ele);
		void setNext(Node *nextNode);
};
