//Bubble sorting
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i,j,a[n],temp;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)             //0
	{
		for(j=0;j<n-1;j++)       
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
    for(i=0;i<n;i++)
    {
    	printf("%d ",a[i]);
	}
}
//bubble sorting using functions
/*#include<stdio.h>
int bubble_sort(int *a,int n)
{
     int i,j,temp;
	 for(i=0;i<n;i++)
	 {
	 	for(j=0;j<n-1;j++)
	 	{
	 		if(a[j]>a[j+1])
			 {
	 	       temp=a[j];
			   a[j]=a[j+1];
			   a[j+1]=temp;
		     }
		}
	 }	
}
int main()
{
	int n;
	scanf("%d",&n);
	int i,a[n];
	for(i=0;i<n;i++) scanf("%d",&a[i]);
	bubble_sort(a,n);
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}*/

/*
#include<stdio.h>
void printarray(int *a,int n) //to print the numbers in every pass
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}
void bubble_sort(int *a,int n)
{
     int i,j,temp,swap=0;
	 for(i=0;i<n;i++)
	 {
	 //printf("Pass%d\n",i+1);
	 	for(j=0;j<n-1;j++)
	 	{
	 		if(a[j]>a[j+1])
			 {
	 	       temp=a[j];
			   a[j]=a[j+1];
			   a[j+1]=temp;
			   swap=1;
		     }
		     printarray(a,n);  //it will every element change
		}                        
		//printarray(a,n);   //it will print  pass change of elements
	 }	
}
int main()
{
	int n;
	scanf("%d",&n);
	int i,a[n];
	for(i=0;i<n;i++) scanf("%d",&a[i]);
	bubble_sort(a,n);
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
//string bubble sorting 
//take input as n,name(without spaces)*/
/*#include<stdio.h>
void bubble_sort(char *arr,int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		printf("Pass:%d\n",i+1);
		for(j=0;j<n-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int t=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=t;
			}
		}
		printf("%s\n",arr);
	}
}
int main()
{
	int n;
	char arr[n];
	scanf("%d",&n);
	scanf("%s",&arr);
	bubble_sort(arr,n);  //function call
	printf("%s",arr);
}*/
