//BST-Insertion and searching
//Inorder,Preorder,Postorder
#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *left;
	struct node *right;
};

typedef struct node Treenode;
Treenode *root=NULL;

void inorder(Treenode *root){
	if(root!=NULL){
		inorder(root->left);
		printf("%d ",root->data);
		inorder(root->right);
	}
}
void preorder(Treenode *root){
	if(root!=NULL){
		printf("%d ",root->data);
		preorder(root->left);
		preorder(root->right);
	}
}
void postorder(Treenode *root){
	if(root!=NULL){
		postorder(root->left);
		postorder(root->right);
		printf("%d ",root->data);
	}
}

Treenode *create_tree_node(int val)
{
	Treenode *nn=(Treenode *)malloc(sizeof(Treenode));
	nn->data=val;
	nn->left=NULL;
	nn->right=NULL;
	return nn;
}

void insert_bst(Treenode *nn){
	if(root==NULL){
		root=nn;
	}
	else{
		Treenode *temp=root;
		while(1){
			if(nn->data==temp->data){
				printf("Data already exists\n");
				break;
			}
			else if(nn->data > temp->data){
				if(temp->right==NULL){
					temp->right=nn;
					break;
				}
				else{
					temp=temp->right;
				}
			}
			else{
				if(temp->left==NULL){
					temp->left=nn;
					break;
				}
				else{
					temp=temp->left;
				}
			}
		}
	}
}

int search_bst(Treenode *root,int key){
	Treenode *temp=root;
	while(temp!=NULL){
		if(key==temp->data){
			return 1;
		}
		else if(key < temp->data){
			temp=temp->left;
		}
		else{
			temp=temp->right;
		}
	}
	return -1;
}

int main()
{
	int ch;
	while(1){
		printf("Enter    1.Insertion\t 2.Search\t 3.Inorder\t 4.Preorder\t 5.Postorder :  ");
		scanf("%d",&ch);
		if(ch==1){
			//insertion
			int val;
			printf("Enter the value for node:  ");
			scanf("%d",&val);
			Treenode *nn=create_tree_node(val);
			insert_bst(nn);
			
		}
		else if(ch==2){
			//search
			int key;
			printf("Enter the key value to search in bst:  ");
			scanf("%d",&key);
			int x=search_bst(root,key);
			if(x==1){
				printf("Key found\n");
			}
			else{
				printf("Key Not found\n");
			}
		}
		else if(ch==3){
			//inorder
			inorder(root);
			printf("\n");
		}
		else if(ch==4){
			//preorder
			preorder(root);
			printf("\n");
		}
		else if(ch==5){
			//postorder
			postorder(root);
			printf("\n");
		}
		else{
			break;
		}
	}
}
