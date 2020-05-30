#include<stdio.h>
int main()
{
	int x,i=0,cont,num,z,primo[100];
	printf("Ingrese un numero que delimite la sucesion\n");
	scanf("%d",&num);
	if(num<=100&&num>=0)
	{
	for(x=1;x<num;x++)
	{
		cont=0;
		for(z=1;z<=x;z++)
		{
			if(x%z==0)
			{
				cont++;
			}
		}
		if(cont==2||z==1||z==0)
		{
			primo[i]=x;
			i++;
		}
	}
	for(x=0;x<i;x++)
	{
		printf("%d,",primo[x]);
	}
}else{
	printf("Numero no valido\n");
}
	return 0;
}
