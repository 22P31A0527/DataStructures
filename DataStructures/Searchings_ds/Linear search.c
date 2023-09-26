// linear search
/*#include<stdio.h>
int linear(int arr[],int n,int se)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(arr[i]==se) return i;
	}
	return -1;
}
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n],i;
	for(i=0;i<n;i++) scanf("%d",arr+i);   //&arr[i] 
	int se;                             //
	scanf("%d",&se);
	int res=linear(arr,n,se);
	if(res==-1) printf("Element not found");
	else printf("Element found at %d index",res);
}*/

//linear search using recursion
#include<stdio.h>
int linear(int *arr,int n,int i,int se)
{
	if( i==n) return -1;
	if(arr[i] == se)  return i;
	return linear(arr,n,i+1,se);
}
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n],i;
	for(i=0;i<n;i++) scanf("%d",arr+i);  
	int se;                             
	scanf("%d",&se);
	int res=linear(arr,n,0,se);
	if(res==-1) printf("Element not found");
	else printf("Element found at %d index",res);
}

