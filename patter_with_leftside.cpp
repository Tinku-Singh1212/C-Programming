//wap to display pyramid 
//     *
//    **
//   *** 
//  ****
// *****  
#include<stdio.h>
int main()
{
	int i,j,line,k;
	printf("Enter the no of line :");
	scanf("%d",&line);
	for(i=0;i<line;i++)
	{
		for(k=line-1;k>i;k--)
		{
			printf(" ");
	    }
		for(j=0;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
