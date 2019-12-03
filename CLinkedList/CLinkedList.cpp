#include"Node.cpp"
using namespace std;
template <class T>
class CLinkedList{
	private:
		Node<T> *head;
		Node<T> *tail;
		int count;
	public:
		CLinkedList(){
		head=nullptr;
		tail=nullptr;
		count=0;
		}

		int size(){
		return count;
		}

		bool isNull(){
		return(head==nullptr && tail==nullptr);
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
			t->setNext(tail);
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
			tail->setNext(head);
			}
			count++;
		}

		void addAtPosition(int pos,T ele){
			Node <T> *t = new Node<T>;
			Node <T> *p = head,*q = head->getNext();
			t->setData(ele);
			if(count >=pos-1){
			
				if(pos == 1){
				addAtBeginning(ele);
                        	}else
				{

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

		void delFromPos(int pos){
		Node<T> *t = head,*p=nullptr;
		if(pos >1 && pos < count){
		for(int i=1;i<pos-1;i++){
		t=t->getNext();
		}
		p = t->getNext();
		t->setNext(p->getNext());
		delete p;
		count--;
		}
		if(pos == 1){
			head=head->getNext();
			delFromBeg();
		}
		if(pos == count){
			t=head;
		for(int i=1;i<count;i++){
                t=t->getNext();
                }
		tail = t;

		}
		
		count--;
		}

		T delFromBeg(){
			if(isNull())
			{
			cout<<"\nDeletion denied\nNo node found";
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
			Node <T>*t = head;
			 if(isNull())
                        {
                        cout<<"\nDeletion denied\nNo node found";
                        }
                        else{
			while( t->getNext() != tail){
			t = t->getNext();
			}
			int temp = tail->getData();
			delete tail;
			tail=t;
			t->setNext(head);
			count--;
			return temp;
			}
		}

	
		void display(){
		Node <int> *t;
		t = head;
		if(isNull()){
			return;
		}
		else{
		for(int i=0;i<count;i++){
			cout<<t->getData()<<"--->";
		t=t->getNext();
		}
		cout<<"head";
		}
		} 
};
