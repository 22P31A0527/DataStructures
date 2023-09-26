    //the  quick sort prgrm is after this prgrm
  //it will show the pivot digit in the correct index   
#include<stdio.h>
int lomuto_partition( int *a,int l, int r)
{
	int pivot=a[r];
	int i=l-1,j=l;
	for(;j<r;j++)
	{
		if(a[j]<pivot) 
		{
			i++;
			int temp=a[i];
	     	a[i]=a[j];
	    	a[j]=temp;
		}
	}
	int flag=a[r];
	a[r]=a[i+1];
	a[i+1]=flag;
	return i+1;
}
int main()
{
	int n;
	scanf("%d",&n);
	int i,a[n];
	for(i=0;i<n;i++) scanf("%d",&a[i]);
	int l=0,r=n-1;
	int p=lomuto_partition(a,l,r);
	for(i=0;i<n;i++) printf("%d ",a[i]);
}

/*#include<stdio.h>
int swap(int *a, int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
int lomuto_partition( int *a,int l, int r)
{
	int pivot=a[r];
	int i=l-1,j=l;
	for(;j<r;j++)
	{
		if(a[j]<pivot) 
		{
			i++;
			swap(&a[i],&a[j]);
		}
	}
	swap(&a[r],&a[i+1]);
	return i+1;
}
quick_sort_rec(int *a, int l ,int r)
{
	if(r>l)
	{
		int p=lomuto_partition(a,l,r);
		quick_sort_rec(a,l,p-1);
		quick_sort_rec(a,p+1,r);
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	int i,a[n];
	for(i=0;i<n;i++) scanf("%d",&a[i]);
	quick_sort_rec(a,0,n-1);
	for(i=0;i<n;i++) printf("%d ",a[i]);
}*/
