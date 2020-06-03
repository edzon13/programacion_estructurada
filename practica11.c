#include<stdio.h>
int fibbonacci(int x);
int main()
{
	int num=0,ant=0;
	printf("Ingresa un numero\n");
	scanf("%d",&num);
	ant=num+fibbonacci(num);
	printf("%d+%d=%d",num,fibbonacci(num),ant);
	
	
	return 0;
}
int fibbonacci(int x)
{
	if(x==0)
	{
		return 0;
	}else if(x==1)
	{
		return 1;
	}else
	{
		return (fibbonacci(x-1)+fibbonacci(x-2));
	}
}
