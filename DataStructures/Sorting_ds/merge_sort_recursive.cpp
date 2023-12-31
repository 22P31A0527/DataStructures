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
void merge_sort_rec(int *a, int l,int r)
{
	if(l<r)
	{
		int m=(l+r)/2;
		merge_sort_rec(a,l,m);
		merge_sort_rec(a,m+1,r);
		merge(a,l,m,r);
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	int i,a[n];
	for(i=0;i<n;i++) scanf("%d",&a[i]);
	merge_sort_rec(a,0,n-1);
	for(i=0;i<n;i++) printf("%d ",a[i]);
}
