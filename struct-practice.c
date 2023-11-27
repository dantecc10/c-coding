#include <stdio.h>
#include <string.h> // Necesario para la funci�n strcpy

typedef char Cadena[255];

typedef struct Usuarios
{
	Cadena nombre;
	int edad;
} Registro;

Registro info[5];

int main(int argc, char *argv[])
{
	int n;
	printf("Ingrese la cantidad de usuarios (no m�s de 5): ");
	scanf("%d", &n);

	Cadena nombre;
	for (int i = 0; i < n; i++)
	{
		printf("Ingrese el nombre del usuario %d: ", i + 1);
		scanf("%s", nombre); // No es necesario usar &nombre, ya que es un array

		// Copiar el nombre ingresado en la estructura
		strcpy(info[i].nombre, nombre);

		// Se puede agregar la lectura de la edad aqu� si lo deseas
		printf("Ingrese la edad de %s: ", info[i].nombre);
		scanf("%d", &info[i].edad);
	}

	// Imprimir los nombres ingresados para verificar
	printf("\nLos nombres ingresados son:\n");
	for (int i = 0; i < n; i++)
	{
		printf("Usuario %d: %s; %d a�os.", i + 1, info[i].nombre, info[i].edad);
	}

	return 0;
}
