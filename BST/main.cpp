#include"BST.cpp"
int main(){
	int ch;
	BST <int> b;
	while(1){
	cout<<"\nEnter choice\n1:Insert into BST\n2:Inorder traversal\n3:Preorder traversal\n4:Postorder traversal\n5:Find element\n6:Exit";
	cin>>ch;
	switch(ch){
		case 1:{
			int ele;
			cout<<"\nEnter element to be inserted in the BST";
			cin>>ele;
			try{
			if(b.insertBST(ele)){
			cout<<"Node insertion successful!!!";		
			}
			}
			catch(runtime_error e){
			cout<<e.what();
			}
		       }
		break;
		case 2:{
		b.inorder(b.getRoot());
		}
		break;
		case 3:
		b.preorder(b.getRoot());
		break;
		case 4:
		b.postorder(b.getRoot());
		break;
		case 5:{
		int ele;
		cout<<"\nEnter element to be searched ::";
		cin>>ele;
		b.search(ele);
		       }
		       break;
		case 6:
		exit(0);
		break;
		default:
		cout<<"\nInvalid choice";
		break;
	}
	}
return 0;
}
