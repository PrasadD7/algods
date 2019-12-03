#include"Node.cpp"
using namespace std;
template <class T>
class DLinkedList{
	private :
		Node<T> *head;
		Node<T> *tail;
		int count;
	public :
		DLinkedList(){
		head = nullptr;
		tail = nullptr;
		count = 0;
		}

		bool isNull(){
		return(head==nullptr && tail==nullptr);
		}
		
		bool isFull(){
		return false;
		}

		int size(){
		return count;
		}
		void reverse{
		
		if(count>=3){
		Node<T> *prev,*cur,*nxt;
		prev = head;
		cur = prev->getNext();
		prev->setNext(nullptr);
		tail = prev;
		while(cur!=nullptr){
		nxt = cur->getNext();
		cur->setNext(prev);
		prev = cur;
		cur = nxt;
		}
		head = prev;
		}
		else
		{
		tail->setNext(head);
		head->setNext(nullptr);
		swap(head,tail);
		}

		return head;           
		
		}


		void addAtBeg(T ele){
			Node<T> *t=new Node<T>;
			t->setData(ele);
			t->setPrev(nullptr);
			t->setNext(head);
		if(isNull()){
		head = t;
		tail = t;
		}
		else{
		head->setPrev(t);
		head = t;
		}
		count++;
		}
		void addAtEnd(T ele){
			 Node<T> *t=new Node<T>;
			 t->setData(ele);
			 t->setPrev(nullptr);
			 t->setNext(nullptr);
			 if(isNull()){
			 head = t;
			 tail = t;
			 }
			 else{
			 t->setPrev(tail);
			 tail->setNext(t);
			 tail=t;
			 }
			 count++;
		}
		
		T delFromBeg(){
		if(!isNull()){
			Node <T> *t = head;
		if(head == tail){
		head = nullptr;
		tail = nullptr;
		delete t;
		}
		else{
		t=t->getNext();
		t->setPrev(nullptr);
		delete head;
		head = t;
		}
		count--;
		}
		}
		
		T delFromEnd(){
		Node <T> *t = new Node <T>;
			if(!isNull()){
		
		if(head == tail){
			int ele = head->getData();
		head = nullptr;
		tail = nullptr;
		delete t;
		return ele;
		}
		else{
			int ele;
		t = tail->getPrev();
		t->setNext(nullptr);
		delete tail;
		tail = t;
		return ele;
		}
		count--;
		}
		}
		T delFromPos(int pos){
		if(!isNull()){
			T ele;
			Node <T> *t = head,*p=nullptr;
			if(pos <= size()){
			if(pos == 1){
			int ele = delFromBeg();
			return ele;
			}
			for(int i=0; i < pos-1 ; i++){
			t = t->getNext(); 
			}
			ele = t->getData();
			p=t->getNext();
			t->getPrev()->setNext(p);
			p->setPrev(t->getPrev());
			delete t;
			count--;
			return ele;
			}
			else
			{
			cout<<"\nPosition not available";
			}
		}
		else{
		cout<<"\nLinked list is empty";
		}
		}
		

		void addAtPos(int pos, T ele){
                
			Node <T> *t = new Node<T>;
			Node <T> *p = head,*q = head->getNext();
			t->setData(ele);
			if(count >=pos-1){
			
				if(pos == 1){
				addAtBeg(ele);
                        	}else
				{

			for(int i=0;i!=pos-2;i++){
			p=p->getNext();
			q=q->getNext();
			}
			p->setNext(t);
			t->setNext(q);
			t->setPrev(p);
			q->setPrev(t);
			count++;
			}
			}
			else{
			cout<<"\nInsufficient nodes";
			}
	
		
		}

		void display(){
		Node <T> *t = head;
		while(t){
			cout<<t->getData()<<"--->";
			t=t->getNext();
		}
		cout<<"nullptr";
		}

		
};
