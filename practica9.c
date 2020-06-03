#include<stdio.h>
int main()
{
	int i,j,alum;
    printf("Cuantos alumnos desea ingresar\n");
    scanf("%d",&alum);
    fflush(stdin);
    char matri[alum][10];
	char nombre[alum][100];
	char apellido[alum][100];
	char fecha_nacimiento[alum][30];
	char nomescuela[alum][30];
	char nomcarrera[alum][30];
	char genero[alum][30];
	for(i=0;i<alum;i++){
		printf("ALUMNO%i\n",i+1);
		printf("Ingrese su matricula\n");
		scanf("%[^\n]",&matri[i]);
		fflush(stdin);
		printf("Ingrese el nombre\n");
		scanf("%[^\n]",&nombre[i]);
		fflush(stdin);
		printf("Ingrese el apellido\n");
		scanf("%[^\n]",&apellido[i]);
		fflush(stdin);
		printf("Ingrese la fecha de nacimiento\n");
		scanf("%[^\n]",&fecha_nacimiento[i]);
		fflush(stdin);
		printf("Ingrese el nombre de la escuela\n");
		scanf("%[^\n]",&nomescuela[i]);
		fflush(stdin);
		printf("Ingrese el nombre de la carrera\n");
		scanf("%[^\n]",&nomcarrera[i]);
		fflush(stdin);
		printf("Ingrese el genero\n");
		scanf("%[^\n]",&genero[i]);
		fflush(stdin);
	}
	system("cls");
	for(i=0;i<alum;i++)
	{
		printf("ALUMNO%i\n",i+1);
		puts(matri[i]);
		puts(nombre[i]);
		puts(apellido[i]);
		puts(fecha_nacimiento[i]);
		puts(nomescuela[i]);
		puts(nomcarrera[i]);
		puts(genero[i]);
		printf("\n");
	}
	
	
	return 0;
	
	
	
}
