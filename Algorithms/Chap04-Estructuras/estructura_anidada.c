#include<stdio.h>
#include<time.h>

struct fecha
{
	unsigned int  mes, dia, anyo;
};

struct tiempo
{
	unsigned int horas, minutos;
};

struct registro_operacion
{
	long numero_cuenta;
	float cantidad;
	int tipo_operacion;
	struct fecha f;
	struct tiempo t;
};

struct registro_operacion entrada();

int main()
{
	struct registro_operacion w;

	w = entrada();

	printf("\n\nOperacion realizada\n");
	printf("Numero de Cuenta: %ld\n", w.numero_cuenta);
	printf("Fecha: %d-%d-%d-%d\n", w.f.dia, w.f.mes, w.f.anyo);
	printf("Hora: %d:%d\n", w.t.horas, w.t.minutos);

	return (0);
}

struct registro_operacion entrada()
{
	time_t T = time(NULL);
	struct tm tm = * localtime(&T);
	struct tiempo t;
	struct fecha d;
	struct registro_operacion una;

	printf("\nNumero de cuenta: ");
	scanf("%ld", &una.numero_cuenta);
	puts("\n\tTipo de operacion\n");
	puts("Deposito(0)");
	puts("Retirada de fondos (1)");
	puts("Puesta al dia (2)");
	puts("Estado de la cuenta (3)");
	printf("opcion: ");
	scanf("%d", &una.tipo_operacion);

	/* Fecha y tiempo */
	una.t.horas = tm.tm_hour;
	una.t.minutos = tm.tm_min;

	una.f.dia = tm.tm_mday;
	una.f.mes = tm.tm_mon+1;
	una.f.anyo = tm.tm_year+1900;

	return una;
}
