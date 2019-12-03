#include"Stack.cpp"
//template class Stack<int>

//template class Stack<char>

int main(){
        Stack <int>st;
        int ch;
        while(1){
        cout<<"\nEnter choice\n1:Push\n2:Pop\n3:Peep\n4:Exit\n";
        cin>>ch;
        switch(ch){
                case 1:
                        int ele;
                        cout<<"\nEnter element to be pushed\n";
                        cin>>ele;
			try{
                        st.push(ele);
			}
			catch(runtime_error e){
			cout<<e.what();
			}
                        break;
                case 2:
			try{
			int e=st.pop();			
                        cout<<"\nPopped element is::"<<e;
			}
			catch(runtime_error e){
			cout<<e.what();
			}
			break;
                case 3:
                        cout<<"\nTop of stack is ::"<<st.peep();
                        break;
                case 4:
                        exit(0);
                        break;
                default:
                        cout<<"\nInvalid choice";
                        break;
        }
        }
        return 0;
}

