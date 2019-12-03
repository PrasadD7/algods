#include<iostream>
#include<stdexcept>
using namespace std;
template <class T>
class BSTNode{
	private:
		BSTNode *left;
		BSTNode *right;
		T data;
	public:
		BSTNode *getLeft(){
		return left;
		}

		BSTNode *getRight(){
		return right;
		}

		void setLeft(BSTNode<T> *newleft){
		left = newleft;
		}

		void setRight(BSTNode<T> *newright){
		right = newright;
		}

		T getData(){
		return data;
		}

		void setData(T ele){
		data = ele;
		}
};
