#include"Queue.h"

template <class T>
bool Queue<T>:: isFull()
{
return(rear==size-1);
}

template <class T>
bool Queue<T>::isNull()
{
return(rear==front);
}

template <class T>
Queue<T>::Queue()
{
front=0;
rear=0;
cout<<"\nEnter size of queue:";
cin>>size;
arr = new T[size];
}

template <class T>
void Queue<T>::insertQ(T ele) throw (runtime_error)
{

if(!isFull()){
     arr[rear++] = ele;
}
else
throw runtime_error("\nQueue Overflow");
}

	template <class T>
void Queue<T>::deleteQ() throw (runtime_error)
{
	if(isNull()){
	throw runtime_error("Stack underflow"); 
	}
	else
	cout<<"Element popped is "<<arr[front++];
}

template <class T>
void Queue<T>::display()
{
	cout<<"\nMembers of Queue";
for(int i=front;i<rear;i++){
cout<<"\n"<<arr[i];
}
}


template class Queue<int>;
