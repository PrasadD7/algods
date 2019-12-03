#include<iostream>
using namespace std;
template <class T>
class Node{
        private:
                T data;
                Node *next;
        public:
                Node *getNext(){
		return next;
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

		friend ostream& operator<<(ostream& os,Node<T> c) ;

};
template <class T>
ostream& operator<<(ostream& os,Node<T> c)
        {
                return os << "\t" << c.data;
        }


