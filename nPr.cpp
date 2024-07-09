//nPr (permutations) is used when order matters. nPr=n!/(n-r)!
#include<stdio.h>
int NPR(int n,int r);
int main()
{
	int n,r;
	printf("Enter the N value : ");
	scanf("%d",&n);
	printf("Enter the R value : ");
	scanf("%d",&r);
	NPR(n,r);
	return 0;
}
int NPR(int n,int r)
{
	int fact1=1,fact2=1,res;
	printf("-----NPR-----");
	for(int i=1;i<=n;i++)
	{
		fact1=fact1*i;
	}
	for(int i=1;i<=(n-r);i++)
	{
		fact2=fact2*i;
	}
	printf("\n %d ",fact1);
	printf("\n %d ",fact2);
	res=fact1/fact2;
	printf("\nResult= %d",res);
	return 0;
}
