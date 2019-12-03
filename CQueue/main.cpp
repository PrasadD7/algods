#include"CQueue.h"
int main(){
	CQueue <int>q;
	int ch;
	do{
	cout<<"\nEnter choice\n1:Enqueue\n2:Dequeue\n3:Exit";
	cin>>ch;
	switch(ch){
		case 1:
			int ele;
			cout<<"\nEnter element to be inserted";
			cin>>ele;
			try{
			q.insertQ(ele);
			}
			catch(runtime_error e){
			cout<<e.what();
			}
			break;
		case 2:
			try{
			cout<<"\nElement "<<q.deleteQ()<<" deleted successfully !!";
			}
			catch(runtime_error e){
			cout<<e.what();
			}
			break;
		case 3:
			break;
		default:
			cout<<"Invalid choice";
			break;
	}
	}
	while(ch!=3);
return 0;
}
