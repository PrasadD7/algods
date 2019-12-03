#include"LinkedList.cpp"
int main(){
	LinkedList <int> ll;
	int ch;
	do{
	cout<<"\nEnter choice:\n1:Add at begining\n2:Add at end\n3:Add at position\n4:Delete from begining\n5:Delete from end\n6:Display\n7:Reverse\n8:Exit ";
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
	int pos, ele;
	cout<<"\n enter position and element to be entered:"<<endl;
	cin>>pos>>ele;
	ll.addAtPosition(pos,ele);
	break;
	case 4:
	 ll.delFromBeg();
	break;
	case 5:
	 ll.delFromEnd();
	break;
	case 6:
	 ll.display();
	break;
	case 7:
	ll.reverse();
	break;
	case 8:
	exit(0);
	break;
	default	:
	cout<<"\nInvalid choice";
	break;
	}

}
while(ch!=8);	
return 0;
}
