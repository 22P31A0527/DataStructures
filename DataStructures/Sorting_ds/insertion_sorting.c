 //insertion sorting (taught by sir)
#include<stdio.h>
void insertion_sort(int n, int *a)
{
	int i,j;
	for(i=1;i<n;i++)
	{
		int key=a[i];
		for(j=i-1;;j--)
		{
		    if(a[j]<key || j==-1)
		    {
		    	a[j+1]=key;
		    	break;
			}
			else
			{
				a[j+1]=a[j];
			}
		}	
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	int a[n],i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	insertion_sort(n,a);
   for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
//insertion sorting (taught by intern)
/*#include<stdio.h>
void insertion_sort(int n, int *a)
{
	int i,j;
	for(i=1;i<n;i++)
	{
		int key=a[i];
		for(j=i-1;j>=0;j--)
		{
		    if(a[j]>key )
		    {
		    	a[j+1]=a[j];
			}
			else
			{
				break;
			}
		}
		a[j+1]=key;	
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	int a[n],i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	insertion_sort(n,a);
   for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}


/*

//insertion sorting in string
#include<stdio.h>
void insertion_sort(int n, char *a)
{
	int i,j;
	for(i=1;i<n;i++)
	{
		int key=a[i];
		for(j=i-1;;j--)
		{
		    if(a[j]<key || j==-1)
		    {
		    	a[j+1]=key;
		    	break;
			}
			else
			{
				a[j+1]=a[j];
			}
		}	
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	char a[20];
	scanf("%s",&a);
	insertion_sort(n,a);
    printf("%s",a);
}*/
