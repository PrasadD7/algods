#include "LinkedList.cpp"
int main()
{
	int n, i;
	cout << "\nEnter no of linked lists in the array ::";
	cin >> n;
	LinkedList<int> ll[n];
	int ch;
	do
	{
		cout << "\nEnter Linked list no to which operation is to be performed (between 0 and "<<n-1<<")::";
		cin>>i;
		if(i<n){
		cout << "\nEnter choice:\n1:Add at begining\n2:Add at end\n3:Add at position\n4:Delete from begining\n5:Delete from end\n6:Display\n7:Reverse\n8:Exit ";
		cin >> ch;
		switch (ch)
		{
		case 1:
		{
			int ele;
			cout << "\nEnter element to be added::";
			cin >> ele;
			ll[i].addAtBeginning(ele);
		}
		break;
		case 2:
		{
			int ele;
			cout << "\nEnter element to be added::";
			cin >> ele;
			ll[i].addAtEnd(ele);
		}
		break;

		case 3:
			int pos, ele;
			cout << "\n enter position and element to be entered:" << endl;
			cin >> pos >> ele;
			ll[i].addAtPosition(pos, ele);
			break;
		case 4:
			ll[i].delFromBeg();
			break;
		case 5:
			ll[i].delFromEnd();
			break;
		case 6:
			ll[i].display();
			break;
		case 7:
			ll[i].reverse();
			break;
		case 8:
			exit(0);
			break;
		default:
			cout << "\nInvalid choice";
			break;
		}
		}
		else{
        cout<<"Linked list no out of range";
        }


	} while (ch != 8);
	return 0;
}
