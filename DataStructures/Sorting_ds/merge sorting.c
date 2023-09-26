 //merge soting
#include<stdio.h>
void merge(int *A,int m,int *B,int n)
{
	int i=0,j=0,k=0;
	int res[m+n];
	while(i<m && j<n)
	{
		if(A[i]<B[j])
		{
			res[k++]=A[i++];
		}
		else
		{
			res[k++]=B[j++];
		}
	}
	while(i<m) res[k++]=A[i++];
	while(j<n) res[k++]=B[j++];
	int z;
	for(z=0;z<m+n;z++)
	{
		printf("%d ",res[z]);
	}
}
int main()
{
	int m,n,i;
	scanf("%d%d",&m,&n);
	int A[m],B[n];
	for(i=0;i<m;i++) scanf("%d",&A[i]);
	for(i=0;i<n;i++) scanf("%d",&B[i]);
	merge(A,m,B,n);
}/*

#include<stdio.h>
void merge(int *A , int m , int *B , int n)
{
	int res,i=0,j=0;
	while(i<m && j<n)
	{
		if(A[i]<B[j])
		 {
			printf("%d ",A[i]);
			i++;
		}
		else 
		{
			printf("%d ",B[j]);
			j++;
		}
		
	}
	while(i<m) printf("%d",A[i]);
	while(i<n) printf("%d",B[j]);
}
int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	int i,A[m],B[n];      //A and B are the arrays
	for(i=0;i<m;i++) scanf("%d",&A[i]);
	for(i=0;i<n;i++) scanf("%d",&B[i]);
	merge(A,m,B,n);
	
}
#include<stdio.h>
void merge(int *A,int l,int m,int r)
{
	int res[r-l+1];
	int i=l,j=m+1,k=0,z;
	while(i<=m && j<=r)
	{
		if(A[i]<=A[j])
		{                        //print a[i] i++
			res[k++]=A[i++];  //k=A[i]  k++ i++
		}
		else
		{
			//printf("%d",B[j]);
			//j++;
			res[k++]=A[j++];
		}
	}
	while(i<=m) res[k++]=A[i++];
    while(j<=r) res[k++]=A[j++];
    for(z=l;z<=r;z++)
    {
    	printf("%d  ",res[z]);
	}
}
int main()
{
	int n,i;
	scanf("%d",&n);
	int A[n]; // A and B are arrays
	for(i=0;i<n;i++){
		scanf("%d",&A[i]);
	}
	int l=0,r=(n-1);
	int m= l+r/2;
	merge(A,l,m,r);
}
*/
