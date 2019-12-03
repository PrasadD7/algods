#include"C2stack.h"
int main(){
        Stack <char>st;
        int ch,n;
        while(1){
        cout<<"\nEnter choice\n1:Push\n2:Pop\n3:Peep\n4:Exit\n";
        cin>>ch;
        switch(ch){
                case
                        cout<<"Enter stack no";
                        cin>>n;
                        try{
                        st.push(n);
                        }
                        catch(runtime_error e){
                        cout<<e.what();
                        }
                        break;
                case 2:
                        cout<<"Enter stack no";
                        cin>>n;
                        try{
                        cout<<"\nPopped element is::"<<st.pop(n);
                        }
                        catch(runtime_error e){
                        cout<<e.what();
                        }
                        break;
                case 3:
                        cout<<"Enter stack no";
                        cin>>n;
                        try{
                        cout<<"\nTop of stack is ::"<<st.peep(n);
                        }
                        catch(runtime_error e){
                        cout<<e.what();
                        }
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
