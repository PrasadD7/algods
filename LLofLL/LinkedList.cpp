#include"Node.cpp"
using namespace std;
template <class T>
class LinkedList{
	private:
		Node<T> *head;
		Node<T> *tail;
		int count;
	public:
		LinkedList(){
		head=nullptr;
		tail=nullptr;
		count=0;
		}
		
		int size(){
		return count;
		}
		
		bool isNull(){
		return (head==nullptr && tail==nullptr);
		}
		
		bool isFull(){
		return false;
		}
		
		void insert(T ele){
		Node <T> *t = new Node<T>;
		t->setData(ele);
		t->setNext(nullptr);
		       if(isNull()){
			head = t;
                        tail = t;
                        }
			else{
                        tail->setNext(t);
			tail=tail->getNext();
			}
			count++;
		}

		void display(){
		Node <T> *t;
		t = head;
		while(t!=nullptr){
			cout<<t->getData();
		t=t->getNext();
		}
		cout<<"NULL";
		}
};
