#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
typedef struct node NODE;
NODE *head = NULL;

void insert_at_head(NODE *nn)
{
	if(head==NULL){ //there are no nodes
	   head=nn;
	}
	else{
		nn->next=head;
		head=nn;
	}
}
void insert_at_end(NODE *nn)
{
	if(head==NULL){
		head=nn;
	}
	else{
		NODE *temp=head;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=nn;
	}
}
void delete_at_head()
{
	if(head==NULL)
	{
		printf("No nodes\n");
	}
	else{
	    printf("%d is deleted\n",head->data);
	    NODE *dn=head;  //storing to be deleted node in dn variable to free
		head=head->next;
		free(dn);     //deallocating memoryy
		/*NODE *temp=head->next;
		head=NULL;
		head=temp;*/
	}
}
void delete_at_end()
{
	if(head==NULL){
		printf("No Nodes\n");
	}
	else if(head->next==NULL){
		printf("%d is deleted\n",head->data);
        head=NULL;
	}
	else
	{
		NODE *temp=head;
		while(temp->next->next!=NULL)
		{
			temp=temp->next;
		}
		printf("%d is deleted\n",temp->next->data);
		NODE *dn=temp->next;
		temp->next=NULL;
		free(dn);
	}
}
void insert_at_position(NODE *nn,int pos)
{
	if(pos==1){
		insert_at_head(nn);
	}
	else{
		NODE *temp=head;
		int c=1;
		while(c<pos-1)
		{
			c++;
			temp=temp->next;
		}
		nn->next=temp->next;
		temp->next=nn;
	}
}
void delete_at_position(int pos)
{
	if(pos==1){
		delete_at_head();
	}
	else{
		NODE *temp=head;
		int c=1;
		while(c<pos-1)
		{
			c++;
			temp=temp->next;
		}
		temp->next=temp->next->next;	
	}
}
void display(){
	if(head==NULL){
		printf("No Nodes\n");
		return;
	}
	NODE *temp=head;
	while(temp!=NULL){
		printf("%d ",temp->data);
		temp=temp->next;
	}
	printf("\n");
}

int main(){
	while(1){
		int choice;
		printf("Enter  1.Insertion at head  2.Insertion at tail  3.Delete at head  4.Delete at tail\n  5.Insert at position  6.Delete at position  7.Display and anything else to exit: ");
		scanf("%d",&choice);
		if(choice==1){
			//insert at head()
			int val;
			printf("Enter value to be inserted: ");
			scanf("%d",&val);
			NODE *nn=(NODE *)malloc(sizeof(NODE));
			nn->data=val;
			nn->next=NULL;
			insert_at_head(nn);
		}
		else if(choice==2){
			//insert at tail()
			int val;
			printf("Enter value to be inserted: ");
			scanf("%d",&val);
			NODE *nn=(NODE *)malloc(sizeof(NODE));
			nn->data=val;
			nn->next=NULL;
			insert_at_end(nn);
		}
		else if(choice==3){
			//delete at head()
		    delete_at_head();
		}
		else if(choice==4){
			//delete at tail()
			delete_at_end();
		}
		else if(choice==5){
			int val;
			printf("Enter value to be inserted: ");
			scanf("%d",&val);
			NODE *nn=(NODE *)malloc(sizeof(NODE));
			nn->data=val;
			nn->next=NULL;
			int pos;
			printf("Enter the position to insert the node: ");
			scanf("%d",&pos);
			insert_at_position(nn,pos);
		}
		else if(choice==6){
			int pos;
			printf("Enter the position to delete the node: ");
			scanf("%d",&pos);
			delete_at_position(pos);
		}
		else if(choice==7){
			//display()
			display();
		}
		else{
			printf("Thank you\n");
			break;
		}
	}
}
