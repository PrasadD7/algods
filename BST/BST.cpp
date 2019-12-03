#include"BSTNode.cpp"
template<class T>
class BST{
	private:
		BSTNode<T> *root;
		int count;
	public:
		BST(){
		root = nullptr;
		count = 0;
		}

		BSTNode<T> *getRoot(){
		return root;
		}

		bool insertBST(T ele){
		BSTNode<T> *cur=root;
		BSTNode<T> *node= new BSTNode<T>;
		node->setData(ele);
		node->setLeft(nullptr);
		node->setRight(nullptr);
		
		if(root == nullptr){
		root = node;
		}
		else{
			while(cur!=nullptr){
		
			if(ele == cur->getData())
			{
			throw runtime_error("\nDuplicate entries not allowed");
			}
			if(ele < cur->getData()){
			
				if(cur->getLeft()==nullptr){
				cur->setLeft(node);
				count++;
				return true;
				}
				else{
				cur=cur->getLeft();
				}
			}
			else{
			if(cur->getRight()==nullptr){
                                cur->setRight(node);
                                count++;
                                return true;
                                }
                                else{
                                cur=cur->getRight();
                                }
			}
			}
		}
		}

		void preorder(BSTNode<T> *t){
			if(t!=nullptr){
		
		cout<<"\t"<<t->getData();		
		preorder(t->getLeft());
		preorder(t->getRight());
			}
		}

		void inorder(BSTNode<T> *t){
                        if(t!=nullptr){
                inorder(t->getLeft());
                cout<<"\t"<<t->getData();
                inorder(t->getRight());
                        }
                }

		void postorder(BSTNode<T> *t){
                        if(t!=nullptr){
                postorder(t->getLeft());
                postorder(t->getRight());
                cout<<"\t"<<t->getData();
			}
                }

		bool search(T ele){
		BSTNode<T> *cur;
		cur=root;
		int c=0;
		if(root == nullptr){
		cout<<"\nNothing to search";
		}
		while(cur!=nullptr){
			if(ele == cur->getData()){
			cout<<"Element found at depth="<<c;
			return true;
			}
		if(ele < cur->getData())
		{
		cur=cur->getLeft();
		}
		else
		{
		cur=cur->getRight();
		}

		c++;

		}
		cout<<"\nEntered element not found !!";
		}
};
