  //Binary search using iteratons in functions
#include<stdio.h>
int search(int *a,int n,int se)
{
	int low=0,high=n-1,mid;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(se==a[mid]) return mid;
	    else if(se>a[mid]) low=mid+1;
	    else high=mid-1;
	}
	return -1;
}
int main()
{
	int n;
	scanf("%d",&n);
	int i,a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int se;
	scanf("%d",&se);
	int res=search(a,n,se);
	if(res!=-1) printf("found at %d",res);
	else printf("NOt found");
}

//Binary search using recursion
/*#include<stdio.h>
int binary_search_rec(int *a,int n,int se,int low,int high)
{
	if(low>high) return -1;
	else
	{
		int mid=(low+high)/2;
		if(se==a[mid]) return mid;
		else if(se>a[mid]) binary_search_rec(a,n,se,mid+1,high);
		else binary_search_rec(a,n,se,low,mid-1);
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	int i,a[n],se;
	for(i=0;i<n;i++) scanf("%d",&a[i]);
	scanf("%d",&se);
	int res=binary_search_rec(a,n,se,0,n-1);
	if(res==-1) printf("Not Found");
	else printf("Found at %d index",res);
}*/

//Binary search in normal way
/*#include<stdio.h>
int main()
{
    int n,c=0;
    scanf("%d",&n);
    int i,a[n],se;
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    scanf("%d",&se);
    int low=0,high=n-1,mid;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(se==a[mid]) 
        {
            c=1;
            break;
        }
        else if(se>a[mid])
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    if(c==1) printf("found at %d",mid);
    else printf("Not found");
}*/
