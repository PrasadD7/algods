#include"LinkedList.cpp"
int main(){
	LinkedList <int> ll;
	int ch;
	do{
	cout<<"\nEnter choice:\n1:PUSH\n2:POP\n3:Display\n4:Exit ";
	cin>>ch;
	switch(ch){
	case 1:{
		int ele;
	       cout<<"\nEnter element to be pushed::";
		cin>>ele;
	       ll.addAtBeginning(ele);
	       }
	break;
	case 2:
	if(ll.delFromBeg()){
		cout<<"element is popped successfully!!!\nNEW STACK\n"<<endl;
		ll.display();
	}
	else
		cout<<"Insufficient elements!!!"<<endl;
	break;
	case 3:
	 ll.display();
	break;
	case 4:
	exit(0);
	break;
	default	:
	cout<<"\nInvalid choice";
	break;
	}

}
while(ch!=4);	
return 0;
}
