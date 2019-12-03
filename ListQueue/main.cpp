#include"LinkedList.cpp"
int main(){
	LinkedList <int> ll;
	int ch;
	do{
	cout<<"\nEnter choice:\n1:Add int the Queue\n2:Delete from Queue\n3:Display\n4:Exit ";
	cin>>ch;
	switch(ch){
	case 1:{
		int ele;
	       cout<<"\nEnter element to be added::";
		cin>>ele;	
	       ll.addAtEnd(ele);
	       }
	break;
	case 2:{
		       ll.delFromBeg();
	       }
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
