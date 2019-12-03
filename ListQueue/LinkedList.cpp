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

		void addAtBeginning(T ele){
		Node<T> *t = new Node<T>;
                t->setData(ele);

			if(isNull()){
			head = t;
			tail = t;
			t->setNext(nullptr);
			}
			else{
				t->setNext(head);
				head = t;
			}
			count++;
		}

		void addAtEnd(T ele){
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

		void addAtPosition(int pos,T ele){
			Node <T> *t = new Node<T>;
			Node <T> *p = head,*q = head->getNext();
			t->setData(ele);
			if(count >pos-2){
			
				if(pos == (size()+1)){
				tail->setNext(t);
				t->setNext(nullptr);
				tail = t;
                        	}else{

			for(int i=0;i!=pos-2;i++){
			p=p->getNext();
			q=q->getNext();
			}
			p->setNext(t);
			t->setNext(q);
			count++;
			}
			}
			else{
			cout<<"\nInsufficient nodes";
			}
			}

		T delFromBeg(){
			if(isNull())
			{
			cout<<"\nDeletion denied\nNo node found";
			}
			else if(head == tail)
                        {
                        Node <T>*t = head,*q;
                        head = nullptr;
                        tail = nullptr;
                        delete t;
                        }
			else
			{
			Node <T>*t = head;
			int temp = t->getData();
			head = head->getNext();
			delete t;
			count--;
			return temp;
			}
		}

		T delFromEnd(){
//			Node <T>*t = head,*q;
			 if(isNull())
                        {
	                        cout<<"\nDeletion denied\nNo node found";
                        }
                        else if(head == tail)
			{
				Node <T>*t = head,*q;

			head = nullptr;
			tail = nullptr; 
			delete t;
			}
			else{
				Node <T>*t = head,*q;

			while( t->getNext() != tail){
			t = t->getNext();
			}

			int temp = tail->getData();

			t->setNext(nullptr);
			delete tail;
			count--;
			tail=t;
			return temp;
			}	
			}
		void display(){
		Node <int> *t;
		t = head;
		while(t){
			cout<<t->getData()<<"--->";
		t=t->getNext();
		}
		cout<<"NULL";

		}
};
