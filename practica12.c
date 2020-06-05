#include<stdio.h>
struct datos_alumno{
	char matri[10];
	char nombre[100];
	char apellido[100];
	char fecha_nacimiento[30];
	char nomescuela[30];
	char nomcarrera[30];
	char genero[30];
}num_alum[100];
void datos(char *datos_alumno);
int main()
{
	datos(&num_alum[100]);
	return 0;
}

void datos(char *datos_alumno)
{
	int i,alum;
	printf("Cuantos alumnos desea ingresar\n");
    scanf("%d",&alum);
    fflush(stdin);
    for(i=0;i<alum;i++){
		printf("ALUMNO%i\n",i+1);
		printf("Ingrese su matricula\n");
		scanf("%[^\n]",num_alum[i].matri);
		fflush(stdin);
		printf("Ingrese el nombre\n");
		scanf("%[^\n]",num_alum[i].nombre);
		fflush(stdin);
		printf("Ingrese el apellido\n");
		scanf("%[^\n]",num_alum[i].apellido);
		fflush(stdin);
		printf("Ingrese la fecha de nacimiento\n");
		scanf("%[^\n]",num_alum[i].fecha_nacimiento);
		fflush(stdin);
		printf("Ingrese el nombre de la escuela\n");
		scanf("%[^\n]",num_alum[i].nomescuela);
		fflush(stdin);
		printf("Ingrese el nombre de la carrera\n");
		scanf("%[^\n]",num_alum[i].nomcarrera);
		fflush(stdin);
		printf("Ingrese el genero\n");
		scanf("%[^\n]",num_alum[i].genero);
		fflush(stdin);
	}
	system("cls");
	for(i=0;i<alum;i++)
	{
		printf("ALUMNO%i\n",i+1);
		printf("Matricula:%s\n",num_alum[i].matri);
		printf("Nombre:%s\n",num_alum[i].nombre);
		printf("Apellido:%s\n",num_alum[i].apellido);
		printf("Fecha de nacimiento:%s\n",num_alum[i].fecha_nacimiento);
		printf("Nombre de la escuela:%s\n",num_alum[i].nomescuela);
		printf("Nombre de la carrera:%s\n",num_alum[i].nomcarrera);
		printf("Genero:%s\n",num_alum[i].genero);
		printf("\n");
	}
}

