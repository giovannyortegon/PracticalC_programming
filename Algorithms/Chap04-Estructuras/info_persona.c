/* Define el tipo estructura info_persona */
#include<stdio.h>

struct info_persona
{
    char nombre[20];
    char calle[30];
    char ciudad[25];
    char providencia[25];
    char codigopostal[6];
};

/* prototipos de funciones */
void entradaPersona(struct info_persona * pp);
void verInfoPersona(struct info_persona * p);

/* define variable de tipo estructura */
struct info_persona reg_dat;

/* Pasa por referencia la variable */
entradaPersona(&reg_dat);

/* pasa por valor */
verInfoPersona(reg_dat);
