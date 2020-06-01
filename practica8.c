#include<stdio.h>
int main()
{
	int escalar,i=0,j=0;
	int matriz[3][3];
	printf("Ingrese el numero a multiplicar por la matriz\n");
	scanf("%d",&escalar);
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Ingrese [%d][%d]]=",i,j);
			scanf("%d",&matriz[i][j]);
			matriz[i][j]*=escalar;
		}
	}
	
	for(i=0;i<3;i++)
	{
		printf("\n");
		for(j=0;j<3;j++)
		{
			printf("%d\t",matriz[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
