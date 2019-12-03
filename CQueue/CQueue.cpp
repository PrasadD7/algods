#include"CQueue.h"
template <class T>
CQueue<T>::CQueue(){
front=0;
rear=0;
cout<<"\nEnter size::>";
cin>>size;
arr = new T[size];
}
template <class T>
void CQueue<T>::insertQ(T ele){
if((rear+1)%size == front){
throw runtime_error("Queue FULL");
return;
}
arr[rear] = ele;
rear=(rear+1)%size;
cout<<"\nElement inserted successfully !!";
}
template <class T>
T CQueue<T> :: deleteQ(){
T ele;
if(front == rear)
throw runtime_error("\nStack Empty");
ele = arr[front];
front=(front+1)%size;
return ele;
}

template class CQueue <int>;
template class CQueue <char>;
