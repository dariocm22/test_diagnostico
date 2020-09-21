#include <stdio.h>
int main() {
    char op;
    char cadena[20];
    int n;

    do
    {
        printf("1.- Capturar enteros\n");
        printf("2.- Mostrar cadena n veces\n");
        printf("3.- Agregar personaje\n");
        printf("4.- Mostrar personajes");
        printf("0.- Salir\n");
        scanf("%c", &op);

        switch (op)
        {
        case '1':
            capturar_enteros();
            break;
        case '2':
            printf("Escribe una cadena de hasta 20 caracteres: ");
            fflush(stdin);
            fgets(cadena, sizeof(cadena), stdin);
            printf("n: ");
            scanf("%i", &n);
            mostrar(n, cadena);
            break;
        case '3':

            capturar_personajes();
            break;
        case '4':
            mostrar_personajes();
            break;
        default:
            break;
        }

        fflush(stdin);
    } while (op != '0');


    return 0;
}