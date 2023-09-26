#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next; //link
};
typedef struct node NODE;  //without writing whole struct node just we write as NODE
int main()
{
	//create a node
	NODE *node1= (NODE*)malloc(sizeof(NODE));
	NODE *node2= (NODE*)malloc(sizeof(NODE));
	NODE *node3= (NODE*)malloc(sizeof(NODE));
	node1->data =10;
	node2->data =20;
	node3->data =30;
	//printf("%d %d %d\n",node1->data,node2->data,node3 ->data);
	printf("%d %d %d\n",&node1->data,&node2->data,&node3 ->data);
	//linking nodes together
	node1->next=node2;//Linking node1 and node2
	node2->next=node3;//linking node2 and node 3
	node3->next=NULL;//setting node3 next part to null
	printf("%d %d %d\n",node1->next,node2->next,node3->next);
	//printf("%d %d %d\n",node1->data,node2->data,node3->data);
	//printf("%d %d %d\n",node1->data,node1->next->data,node1->next->next->data);
}
