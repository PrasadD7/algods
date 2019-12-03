#include"LinkedList.cpp"
int main(){
	LinkedList <int> ll;
	int ch;
	do{
	cout<<"\nEnter choice:\n1:Add at begining\n2:Add at end\n3:Delete from begining\n4:Delete from end\n5:Display\n6:Exit ";
	cin>>ch;
	switch(ch){
	case 1:{
		int ele;
	       cout<<"\nEnter element to be added::";
		cin>>ele;	
	       ll.addAtBeginning(ele);
	       }
	break;
	case 2:{
	int ele;
	cout<<"\nEnter element to be added::";
	cin>>ele;
	ll.addAtEnd(ele);
	       }
	break;
	
	case 3:
	 ll.delFromBeg();
	break;
	case 4:
	 ll.delFromEnd();
	break;
	case 5:
	 ll.display();
	break;
	case 6:
	exit(0);
	break;
	default	:
	cout<<"\nInvalid choice";
	break;
	}

}
while(ch!=6);	
return 0;
}
