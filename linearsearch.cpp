#include<stdio.h>
int linearsearch(int a[10],int n,int val)
{
	for(int i=0;i<n;i++)
	{
		if(a[i]==val)
		{
			return i;
		}
	}
	return -1;
}
int main()
{
	int a[10]={70,40,30,11,57,41,25,14,52,65};
	int val=41;
	int n=sizeof(a)/sizeof(a[0]);
	int res=linearsearch(a,n,val);
	for(int i=0;i<10;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\nElement to be searched is %d",val);
	if(res==-1)
	{
		printf("\nelement is not present in array ");
	}
	else
	{
		printf("\nelement is present at the index %d",res);
	}
	return 0;
}


