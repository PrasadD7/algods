#include"DLinkedList.cpp"
int main(){
	DLinkedList <int> ll;
	int ch;
	do{
	cout<<"\nEnter choice:\n1:Add at begining\n2:Add at end\n3:Add at position\n4:Delete from begining\n5:Delete from end\n6:Display\n7:Exit \n8:Delete from position";
	cin>>ch;
	switch(ch){
	case 1:{
		int ele;
	       cout<<"\nEnter element to be added::";
		cin>>ele;	
	       ll.addAtBeg(ele);
	       }
	break;
	case 2:{
	int ele;
	cout<<"\nEnter element to be added::";
	cin>>ele;
	ll.addAtEnd(ele);
	       }
	break;
	
	case 3:{
	int pos, ele;
	cout<<"\n enter position to which element is to be added:";
	cin>>pos;
	cout<<"\nEnter element";
	cin>>ele;
	ll.addAtPos(pos,ele);
	       }
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
	exit(0);
	break;
	case 8:{
		       int pos;
		       cout<<"Enter position::"<<endl;
		       cin>>pos;
	ll.delFromPos(pos);}
	break;
	default	:
	cout<<"\nInvalid choice";
	break;
	}

}
while(ch!=7);	
return 0;
}
