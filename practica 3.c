#include<stdio.h>
int main()
{
	char a;
	printf("Ingrese un caracter\n");
	a=getchar();
	int b=(int)a;
	if(48<=b&&b<=57){
		printf("Numero:");
	}else {
	if(65<=b&&b<=90){
	
		printf("letra mayuscula:");
	
	}else{
	if(97<=b&&b<=122){
	
		printf("letra minuscula:");
	}else{
	    printf("Simbolo:");
	}
  }
}
putchar(a);
printf("\n");
	return 0;
}
