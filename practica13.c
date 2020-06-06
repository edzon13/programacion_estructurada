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

int main()
{
	int i,alum;
	FILE*fp;
	fp=fopen("test.txt","w+");
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
	fprintf(fp,"\"Estudiantes\":[\n");
	for(i=0;i<alum;i++)
	{
		fprintf(fp,"{\"Matricula\":%s,\"Nombre\":%s,\"Apellido\":%s,\"Fecha de Nacimiento\":%s,\"Nombre de la escuela\":%s,\"Nombre de la carrera\":%s,\"Genero\":%s}\n"
		,num_alum[i].matri,num_alum[i].nombre,num_alum[i].apellido,num_alum[i].fecha_nacimiento,num_alum[i].nomescuela,num_alum[i].nomcarrera,num_alum[i].genero);
		
	}
	fprintf(fp,"]\n");
	fclose(fp);
	return 0;
}

