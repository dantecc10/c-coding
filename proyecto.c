#include <stdio.h>
#include <string.h> // Necesario para la funciï¿½n strcpy

typedef char Cadena[255];

typedef struct Players
{
	Cadena nombre;
	int edad;
} Registro;

typedef struct Teams
{
	Cadena nombre;
	Registro Jugadores[10];
} Equipos;

Equipos Junior[8];
Equipos Free[8];

int main(int argc, char *argv[])
{	
	int option = 0, opt = 0;
	Cadena categories[2];
	strcpy(categories[0], "junior");
	strcpy(categories[1], "libre");
	
	while (option != 10)
	{
		printf("Bienvenido, por favor, elija una opcion:\n");
		printf("1.- Mostrar equipos\n");
		printf("2.- Registrar equipo\n");
		printf("3.- Mostrar jugador\n");
		printf("4.- Registrar jugador\n");
		printf("5.- Eliminar equipo\n");
		printf("6.- Eliminar jugador\n");
		
		printf("10.- Salir\n");
		scanf("%d", &option);
		switch (option)
		{
		case 1:
		{
			int contador = 0;
			while(opt!=1 || opt!=2){
				printf("Elija una categoría:\n");
				printf("1.- Junior\n");
				printf("2.- Libre\n");
				scanf("%d", &opt);
			}
			printf("Haz elegido la categoría %s, los equipos inscritos son:\n", categories[opt-1]);
			if(opt = 1){
				for(int i=0; i<8; i++){
					if(Junior[i].nombre != ""){
						contador++;
						printf("  %d.- %s\n", contador, Junior[i].nombre);
					}
				}
				printf("Elige un equipo: ");
				scanf(%d, &opt);
			}else{
				for(int i=0; i<8; i++){
					if(Junior[i].nombre != ""){
						contador++;
						printf("%d.- %s", contador, Junior[i].nombre);
					}
				}
			}
			break;
		}
		}
	}
}
