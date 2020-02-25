#include<stdio.h>
int main()
{
	float num,num1,result;
	char op;
	printf("BIENVENIDO A LA CALCULADORA\n");
	printf("Ingrese dos numeros cualesquiera y la operacion a realizar\n");
	scanf("%g %c %g",&num,&op,&num1);
	switch(op)
	{
		case '+':
			result=num+num1;
			printf("El resultado es:%g",result);
		break;
		case '-':
			result=num-num1;
			printf("El resultado es:%g",result);
		break;
		case '*':
			result=num*num1;
			printf("El resultado es:%g",result);
		break;
		case '/':
			result=num+num1;
			printf("El resultado es:%g",result);
		break;
		default:
		    printf("Error 404");	
		
	}
	return 0;
}	
