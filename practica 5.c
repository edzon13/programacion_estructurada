#include<stdio.h>
int main()
{
	int num,prom,cont=0,i=0;
	
	while(num>=0)
	{
		
	printf("Ingrese un numero\n");
	scanf("%d",&num);
	
	if(num>=0)
	{
	i++;
	cont=cont+num;	
	}
	
	}
	
	prom=cont/i;
	printf("Su promedio es:%d\n",prom);
	return 0;
}
