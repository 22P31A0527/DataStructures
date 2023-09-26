#include<stdio.h>
int swap(int *a, int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
int lomuto_partition( int *nums,int l, int r)
{
	int pivot=nums[r];
	int i=l-1,j=l;
	for(;j<r;j++)
	{
		if(nums[j]<pivot) 
		{
			i++;
			swap(&nums[i],&nums[j]);
		}
	}
	swap(&nums[r],&nums[i+1]);
	return i+1;
}
quick_sort_rec(int *nums, int l ,int r)
{
	if(r>l)
	{
		int p=lomuto_partition(nums,l,r);
		quick_sort_rec(nums,l,p-1);
		quick_sort_rec(nums,p+1,r);
	}
}
int findkthlargest(int *nums,int numsSize,int k)
{
	quick_sort_rec(nums,0,numsSize-1);
	return nums[numsSize-k];
}
int main()
{
	int numsSize,i,nums[numsSize],k;
	scanf("%d",&numsSize);
	for(i=0;i<numsSize;i++) scanf("%d",&nums[i]);
	scanf("%d",&k);
	int res=findkthlargest(nums,numsSize,k);
	printf("%d",res);
}

