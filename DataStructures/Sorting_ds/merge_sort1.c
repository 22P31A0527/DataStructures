#include<stdio.h>
#define min(a,b) a<b?a:b
void merge(int *a , int l ,int m, int r)
{
	int res[r-l+1];
	int i=l,j=m+1,k=0;
	while(i<=m && j<=r)
	{
		if(a[i]<=a[j]) res[k++]=a[i++];
		else res[k++]=a[j++];
	}
	while(i<=m) res[k++]=a[i++];
	while(j<=r) res[k++]=a[j++];
	int z;
	k=0;
	for(z=l;z<=r;z++) a[z]=res[k++];
	
}
void merge_sort(int *a, int n)
{
	int p,i,l,r,m;
	for(p=1;p<n;p*=2)
	{
		for(i=0;i<n;i+=2*p)
		{
			l=i;
			r=min(l+2*p-1,n-1);     //it will work for both even and odd numbers
			m=min(l+p-1,n-1);
			//r=l+2*p-1;   // it will work only for even index number only
			//m=l+p-1;    
		    merge(a,l,m,r);
		    
		}
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	int i,a[n];
	for(i=0;i<n;i++) scanf("%d",&a[i]);
	merge_sort(a,n);
	for(i=0;i<n;i++) printf("%d ",a[i]);
}
