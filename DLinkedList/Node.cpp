#include<iostream>
using namespace std;
template <class T>
class Node{
	private:
		T data;
		Node *next;
		Node *prev;
	public:
		Node *getNext(){
		return next;
		}
		Node *getPrev(){
		return prev;
		}
		T getData(){
		return data;
		}
		void setData(T ele){
		data = ele;
		}
		void setNext(Node *nextNode){
		next = nextNode;
		}
		void setPrev(Node *prevNode){
		prev = prevNode;		
		}
};
