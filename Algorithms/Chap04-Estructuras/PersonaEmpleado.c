#include<stdio.h>

struct fecha
{
	unsigned int dia, mes, anyo;
};

struct persona
{
	char nombre[20];
	unsigned int edad;
	int altura;
	int peso;
	struct fecha fec;
};

struct personaEmpleado
{
	struct persona unapersona;
	unsigned int salario;
	unsigned int horas_por_semana;
};

/* prototipo de funcitones */
void entrada(struct personaEmpleado *p);
void muestra(struct personaEmpleado up);

void main()
{
	struct personaEmpleado p;
	/* En la llamadas transmite la direccion de la estructura */
	entrada(&p);

	/* salida de los dataos a;macenados */
	muestra(p);

	return (0);
}

void entrada(struct personaEmpleado *p)
{
	printf("\nIntroduzca su nombre: ");
	gets(p->unapersona.nombre);
	printf("Intriduzca su edad: ");
	scanf("%d", &p->unapersona.edad);
	printf("Introduzca su altura: ");
	scanf("%d", &p->unapersona.altura);
	printf("Introduzca su peso: ");
	scanf("%d", &p->unapersona.peso);
	printf("Introduzca su fecha de nacimiento: ");
	scanf("%d %d %d", &p->unapersona.fec.dia,
					  &p->unapersona.fec.mes,
					  &p->unapersona.fec.anyo);
	printf("Introduzca su salario: ");
	scanf("%d", &p->salario);
	printf("introduzca numero de horas: ");
	scanf("%d", &p->horas_por_semana);
}

void muestra(struct personaEmpleado up)
{
	puts("\n\nDatos de una empleado");
	puts("\n\n\t-------------------");
	printf("Nombre: %s\n", up.unapersona.nombre);
	printf("Edad: %d\n", up.unapersona.edad);
	printf("Fecha de nacimiento: %d-%d-%d\n",
			up.unapersona.fec.dia,
			up.unapersona.fec.mes,
			up.unapersona.fec.anyo);
	printf("Altura: %d\n", up.unapersona.altura);
	printf("Peso: %d\n", up.unapersona.peso);
	printf("Salario: %d\n", up.salario);
	printf("Numero de Horas: %d\n", up.horas_por_semana);
}
