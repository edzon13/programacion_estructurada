#include<stdio.h>
int main()
{
	int num,cont=0,i=0,prom;
	do
	{
	printf("Ingrese un numero\n");
	scanf("%d",&num);
		if(num>=0)
	{
	i++;
	cont=cont+num;	
	}
	}while(num>=0);
	prom=cont/i;
	printf("Su promedio es:%d\n",prom);		
	return 0;
	
	
}
