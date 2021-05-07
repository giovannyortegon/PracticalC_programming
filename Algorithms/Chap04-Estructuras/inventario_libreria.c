#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

struct inventario
{
    char titulo[25];
    char fecha_pub[20];
    char autor[30];
    int num;
    int pedido;
    float precio_venta;
};

int main()
{
    struct inventario libro[100];
    int total = 0;
    char resp, b[21];

    do
    {
        printf("Total libros %d\n", (total+1));
        printf("Cual es el titulo: ");
        gets(libro[total].titulo);

        printf("Cual es la fecha de publicaion: ");
        gets(libro[total].fecha_pub);

        printf("Quien es el autor: ");
        gets(libro[total].autor);

        printf("cuantos libros existen: ");
        scanf("%d", &libro[total].num);

        printf("Cuantos ejemplares existen pedidos: ");
        scanf("%d", &libro[total].pedido);

        fflush(stdin);
        printf("Cual es el precio de venta: ");
        gets(b);

        libro[total].precio_venta = atof(b);  // conversion a real

        fflush(stdin);
        printf("\nHay mas libros? (S/N)");
        scanf("%c", &resp);

        resp = toupper(resp);       /* convierte a mayusculas */
        if (resp == 'S')
        {
            total++;
            continue;
        }

    } while(resp == 'S');

    return (0);
}
