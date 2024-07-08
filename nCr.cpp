//When the order does not matter, you use nCr.  nCr=n!/r!(n-r)!
#include<stdio.h>
int NCR(int n,int r);
int main()
{
	int n,r;
	printf("Enter the N value : ");
	scanf("%d",&n);
	printf("Enter the R value : ");
	scanf("%d",&r);
	NCR(n,r);
	return 0;
}
int NCR(int n,int r)
{
	int fact1=1,fact2=1,fact3=1,res;
	printf("-----NCR-----");
	for(int i=1;i<=n;i++)
	{
		fact1=fact1*i;
	}
	for(int i=1;i<=r;i++)
	{
		fact2=fact2*i;
	}
	for(int i=1;i<=(n-r);i++)
	{
		fact3=fact3*i;
	}
	printf("\n %d ",fact1);
	printf("\n %d ",fact2);
	printf("\n %d ",fact3);
	res=fact1/(fact2*fact3);
	printf("\nResult= %d ",res);
	return 0;
}
