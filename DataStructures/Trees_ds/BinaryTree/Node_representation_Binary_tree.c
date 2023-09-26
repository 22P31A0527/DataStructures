#include<stdio.h>
#include<stdlib.h>
struct t_node{
	int data;
	struct t_node *left;
	struct t_node *right;
};
typedef struct t_node TreeNode;
//creating a function that creates a tree node and puts value in it.
TreeNode* create_tree_node(int val){
	TreeNode *nn=(TreeNode*)malloc(sizeof(TreeNode));
	nn->data=val;
	nn->left=NULL;
	nn->right=NULL;
	return nn;
}

void pre_order(TreeNode *root){
	if(root!=NULL){
		printf("%d ",root->data); 
		pre_order(root->left);  //root->left->left  40->left=null   
		pre_order(root->right);   //40->right
	}	
}
void in_order(TreeNode *root){
	if(root!=NULL){
		in_order(root->left);
		printf("%d ",root->data);
		in_order(root->right);
	}	
}
void post_order(TreeNode *root){
	if(root!=NULL){
		post_order(root->left);
		post_order(root->right);
		printf("%d ",root->data);
	}	
}
void level_order(TreeNode *root){
	TreeNode *q[1000];//queue of tree nodes
	int front=0;
	int rear=1;
	q[0]=root; //inserting root into queue  //10
	while(front != rear){
		TreeNode *dn=q[front++];  //dequeue  //1 2
		printf("%d ",dn->data);  //10  20
		// check if deleted node is having left child
		if(dn->left != NULL){  //20
			q[rear++]=dn->left;  //1 2
		}
		//check if deleted node is having right child
		if(dn->right != NULL){  //30
			q[rear++]=dn->right;//3 
		}
		dn=NULL;
		free(dn);
	}
}
int main(){
	//creating tree nodes
	TreeNode *n1,*n2,*n3,*n4,*n5,*n6,*n7,*n8,*n9;
	n1=create_tree_node(10);
	n2=create_tree_node(20);
	n3=create_tree_node(30);
	n4=create_tree_node(40);
	n5=create_tree_node(50);
	n6=create_tree_node(60);
	n7=create_tree_node(70);
	n8=create_tree_node(80);
	n9=create_tree_node(90);
	//making connections.
	n1->left=n2;
	n1->right=n3;
	n2->left=n4;
	n2->right=n5;
	n3->left=n6;
	n3->right=n7;
	n4->right=n8;
	n7->left=n9;
	/*printf("%d ",n1->left->data); //20
	printf("%d ",n1->right->data);//30
	printf("%d ",n1->left->left->data);//40
	printf("%d ",n1->left->right->data);//50
	printf("%d ",n1->right->left->data);//60
	printf("%d ",n1->right->right->data);//70
	printf("%d ",n1->left->left->right->data);//80
	printf("%d ",n1->right->right->left->data);//90*/
	pre_order(n1);
	printf("\n");
	in_order(n1);
	printf("\n");
	post_order(n1);
	printf("\n");
	level_order(n1);
}
