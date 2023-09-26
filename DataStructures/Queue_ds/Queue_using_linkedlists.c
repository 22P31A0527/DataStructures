#include<stdio.h>
struct node{
	int data;
	struct node *next;
};
typedef struct node NODE;
NODE *head = NULL;
NODE *tail = NULL;
int c=0;
void Enque(NODE *nn){
	if(c==max_size){
		printf("Queue is full\n");
	}
	else {
		
	}
}
int main(){
	int max_size;
	printf("Enter the maximum size of nodes: ");
	scanf("%d",&max_size);
	int choice;
	while(1){
		printf("Enter 1.Enque\n2.Deque\n3.Display and other to exit: ");
		scanf("%d",&choice);
		if(choice==1){
			NODE *nn=(NODE *)malloc(sizeof(NODE *));
			int val;
			printf("Enter the value: ");
			scanf("%d",&val);
			nn->data=val;
			nn->next=NULL;
			Enque(nn);
		}
		else if(choice==2){
			Deque();
		}
		else if(choice==3){
			Display();
		}
		else{
			break;
		}
	}
}
