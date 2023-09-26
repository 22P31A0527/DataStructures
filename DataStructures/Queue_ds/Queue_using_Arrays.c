//Imlementing queue data structures using arrays
//enque is used to insert at tail
//deque is used to delete at head
#include<stdio.h>
int queue[100],front=-1,rear=-1,max_size;
void Enque(int val){
	if(rear==max_size-1){
		printf("Queue is full\n");
	}
	else if(front==-1 && rear==-1){
		front++;
		rear++;
		queue[rear]=val;
	}
	else{
		queue[++rear]=val;
	}
}
int Deque(){
	if(front==-1)
	{
		return -1;
	}
	else if(front==rear){
		int de=queue[front];
		front=-1;
		rear=-1;
		return de;
	}
	else
	{
	    int de=queue[front];
		front++;
		return de;
	}
}
void display(){
	if(front==-1 && rear==-1){
		printf("Queue is empty\n");
		return;
	}
	int i;
	for(i=front;i<=rear;i++){
		printf("%d ",queue[i]);
	}
	printf("\n");
}

int main(){
	printf("Enter Maximum of size of queue: ");
	scanf("%d",&max_size);
	int choice;
	while(1){
		printf("Enter 1. Enque  2.Deque 3.Display and  other to exit ");
		scanf("%d",&choice);
		if(choice==1){
			//enque()
			int val;
			printf("Enter the value: ");
			scanf("%d",&val);
			Enque(val);
		}
		else if(choice==2){
			//deque()
			int res=Deque();
			if(res==-1) printf("Queue is empty\n");
			else printf("%d is deleted\n",res);
		}
		else if(choice==3){
			//display()
			display();
		}
		else
		{
			break;
		}
	}
}
