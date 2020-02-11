#include<stdio.h>
int main()
{
	int a=10,b=5,c=10+5,d=10-5,e=10*5,f=10/5,g=10%5,h=10<<5,i=10>>5,j=10>5,k=10<5,l=10&&5,m=10||5,n=10==5,o=10!=5,p=a++;
	printf("suma \n %d+%d=%d \n",a,b,c);
	printf("resta \n %d-%d=%d \n",a,b,d);
	printf("multplicacion \n %d*%d=%d \n",a,b,e);
	printf("division \n %d/%d=%d \n",a,b,f);
	printf("%d mod %d=%d \n",a,b,g);
	printf("%d<<%d=%d \n",a,b,h);
	printf("%d>>%d=%d \n",a,b,i);
	printf("%d>%d=%d \n",a,b,j);
	printf("%d<%d=%d \n",a,b,k);
	printf("%d&&%d=%d \n",a,b,l);
	printf("%d||%d=%d \n",a,b,m);
	printf("%d==%d=%d \n",a,b,n);
	printf("%d!=%d=%d \n",a,b,o);
	printf("%d++=%d \n",a,b,p);
	
	return 0;
}
