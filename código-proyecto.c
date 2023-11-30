#include <stdio.h>
#include <string.h> // Necesario para la funci�n strcpy

typedef char Cadena[255];

typedef struct Players
{
    Cadena nombre;
    int edad;
    int nacimiento[3];
} Jugadores;

typedef struct Teams
{
    Cadena nombre;
    Jugadores Players[10];
} Equipos;

Equipos Junior[8];
Equipos Free[8];

int main(int argc, char *argv[])
{
    int option = 0, opt = 0, equipos = 0;
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
            while (opt != 1 || opt != 2)
            {
                printf("Elija una categor�a:\n");
                printf("1.- Junior\n");
                printf("2.- Libre\n");
                scanf("%d", &opt);
            }
            printf("Haz elegido la categor�a %s, los equipos inscritos son:\n", categories[opt - 1]);
            if (opt = 1)
            {

                for (int i = 0; i < 8; i++)
                {
                    if (Junior[i].nombre != "")
                    {
                        contador++;
                        printf("  %d.- %s\n", contador, Junior[i].nombre);
                    }
                }
                printf("Elige un equipo: ");
                scanf(% d, &opt);
            }
            else
            {
                for (int i = 0; i < 8; i++)
                {
                    if (Junior[i].nombre != "")
                    {
                        contador++;
                        printf("%d.- %s", contador, Junior[i].nombre);
                    }
                }
            }
            break;
        }
        case 2:
        {
            opt = 0;
            int jugadores = 0, birthInfo[3];
            Cadena team_name = "", name[10][3], tempString;

            while (opt != 1 || opt != 2)
            {
                printf("Elija una categor�a:\n");
                printf("1.- Junior\n");
                printf("2.- Libre\n");
                scanf("%d", &opt);
            }
            printf("Haz elegido la categor�a %s.\n", categories[opt - 1]);

            printf("Escribe el nombre del equipo:\n");
            scanf(% s, &team_name);
            printf("\n");
            int i = 0, limitAges[2];
            bool salir = false;
            while (jugadores < 6 && salir != true && i < 10)
            {
                printf("Añade un jugador.");

                printf("\nIndica el nombre: ");
                scanf("%s", tempString);
                strcpy(name[i][0], tempString);

                printf("\nIndica el apellido paterno: ");
                scanf("%s", tempString);
                strcpy(name[i][1], tempString);

                printf("\nIndica el apellido paterno: ");
                scanf("%s", tempString);
                strcpy(name[i][2], tempString);

                printf("\nIndica el día de nacimiento (DD): ");
                scanf("%d", &birthInfo[0]);

                printf("\nIndica el mes de nacimiento (MM): ");
                scanf("%d", &birthInfo[1]);

                printf("\nIndica el año de nacimiento (AAAA): ");
                scanf("%d", &birthInfo[2]);
            }

            if (opt == 1)
            {
                limitAges[0] = 13;
                limitAges[1] = 17 if (validateAges(birthInfo, ))
            }
        }
        break;
        }
    }
}

bool validateAge(int birth[3], int limits[2]) // recibo parámetros como arreglo
{
    bool accepted = false;
    int currentDate[3]; // Establezco fecha de comparación de edad en 29/11/2023
    currentDate[0] = 29;
    currentDate[1] = 11;
    currentDate[2] = 2023;
    if (limits[0] == limits[1])
    {
        if (birth[2] < currentDate[2])
        {
            if (currentDate[2] - birth[2] >= limits[1])
            {
                if (currentDate[2] - birth[2] == limits[1])
                {
                    if (birth[1] > currentDate[1])
                    {
                        accepted = false;
                    }
                    else
                    {
                        if (birth[1] = currentDate[1])
                        {
                            if (birth[0] <= currentDate[0])
                            {
                                accepted = true;
                            }
                            else
                            {
                                accepted = true;
                            }
                        }
                    }
                }
                else
                {
                    accepted = true;
                }
            }
            else
            {
                accepted = false;
            }
        }
        else
        {
            accepted = false;
        }
    }
    else
    {
        if (currentDate[2] - birth[2] <= limits[1] && currentDate[2] - birth[2] >= limits[0])
        {
            if (currentDate[2] - birth[2] < limits[1] && currentDate[2] - birth[2] > limits[0])
            {
                accepted = true;
            }
        }
        else
        {
            accepted = false;
        }
    }

    return accepted;
}