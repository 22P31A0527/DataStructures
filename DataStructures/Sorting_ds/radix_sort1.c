#include<stdio.h>
int get_max(int *a , int n)
{
	int i;
	int max=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	return max;
}

/*int place(int *a , int n ,e)
{
	int i;  
	for(i=0;i<n;i++)
	{
		int place=(a[i]/e)%10;  
	}
	e=e*10;    
}*/
int main()
{
	int n;
	scanf("%d",&n);
	int i,a[n];
	for(i=0;i<n;i++) scanf("%d",&a[i]);
	//int e=1;
	//place(a,n,1);
	int max=get_max(a,n);
	printf("%d",max);
}
