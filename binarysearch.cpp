#include<stdio.h>
int binarysearch(int a[10],int beg,int end,int val)
{
	int mid;
	if(end>=beg)
	{
		mid=(beg+end)/2;
		if(a[mid]==val)
		{
			return mid+1;
		}
		else if(a[mid]<val)
		{
			return binarysearch(a,mid+1,end,val);
		}
		else 
		{
            return binarysearch(a, beg, mid - 1, val);
        }
	}
	return -1;
}
int main()
{
	int a[10]={11,14,25,30,40,44,50,60,70,80};
	int val=40;
	int n=sizeof(a)/sizeof(a[0]);
	int res=binarysearch(a,0,n-1,val);
	printf("the element of the array are: ");
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\nelement to be searched is= %d\n",val);
	if(res==-1)
	{
		printf("\nelement is not present in the array");
	}
	else
	{
		printf("\nelement is present at the array= %d",res);
	}
	return 0;
}
