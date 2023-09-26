//fibonocci sequence 
/*#include<stdio.h>   //0 1 1 2 3 5 8
int main()
{
	int a=0,b=1,c,n;
	scanf("%d",&n);
	while(n>0)
	{
		c=a+b;
		printf("%d ",a);
		a=b;
		b=c;
		n--;
	}
}

#include<stdio.h>
int main()
{
	int a=0,b=1,c,n;
	scanf("%d",&n);
	while(n!=0) //(a>n)      
	{
		if(a>n)  break;
		c=a+b;
	
		//printf("%d ",a);
		a=b;
		b=c;
	}
	printf("%d",a);
}

/*#include<stdio.h>   
int main()
{
	int a=0,b=1,n;
	scanf("%d",&n);
	printf("%d %d ",a,b);
	int c=a+b;
	while(c<n)
	{
		printf("%d ",c);
		a=b;
		b=c;
		c=a+b;
	}
	printf("\n%d ",c);
}*/


//fibonocci search 
//fibonocci series:0,1,1,2,3,5,8,13,21,34,55.........
#include<stdio.h>
#define min(a,b) a<b ? a:b
int fibonocci_search(int n,int *arr,int se) 
{
	int a=0,b=1,c=1;
	while(c<n)
	{
		a=b;
		b=c;
		c=a+b;	
	}
//	printf("%d %d %d",c,a,b);
    ////int fk=c,fk-1=b,fk-2=a;
    int offset=-1,index;
    while(c>0)
    {
        index=min(offset+a,n-1);
		if (se==arr[index])
		{
			return index;  //element found
		}
		 
		else if (se>arr[index]) 
		{
			//bring all the fibonocci 1 fib down
			c=b;
			b=a;
			a=c-b;
			//set offset=index
			offset=index;
		}
		else
		{
		    //bring all the fibonocci 2 fib down
			c=a;
			b=b-a;
			a=c-b;	
		}	
	}
	/*if(b && arr[offset+1]==se)
	{
		return offset+1;
	}*/
	return -1;
}
int main()
{
	int n;
	scanf("%d",&n);
	int i,arr[n],se;
	for(i=0;i<n;i++) scanf("%d",&arr[i]);
	scanf("%d",&se);
    int res=fibonocci_search(n,arr,se);
    if(res==-1) printf("Element not found ");
    else printf("Element found at %d index",res);
}
