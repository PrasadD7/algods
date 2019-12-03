#include"LinkedList.cpp"
int main(){
	LinkedList < LinkedList<int> > ll;
	LinkedList <int> l;
	int ch;
	do{
	cout<<"\nEnter choice:\n1:Add Data\n2:Display\n3:Exit ";
	cin>>ch;
	switch(ch){
	case 1:{
		int ele;
	       cout<<"\nEnter element to be added::";
		cin>>ele;	
	       l.insert(ele);
	       ll.insert(l);
	       }
	break;
	case 2:
	 ll.display();
	break;
	case 3:
	exit(0);
	break;
	default	:
	cout<<"\nInvalid choice";
	break;
	}

}
while(ch!=3);	
return 0;
}
