#include<mysql/mysql.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
	MYSQL * conn;
	MYSQL_RES * resultset;
	MYSQL_ROW row;

	int opcion = 0;
	char * server = "127.0.0.1";
	char * user = "root";
	char * password = "toor";
	char * database = "agenda";
	char name[30], last_name[30], phone_number[11], sqlquery[255];

	conn = mysql_init(NULL);

	if (!mysql_real_connect(conn, server, user, password, database,
							0, NULL, 0))
	{
		fprintf(stderr, "%s\n", mysql_error(conn));
		exit(1);
	}

	while (1)
	{
		printf("********** MENU **********\n");
		printf("1. Buscar\n");
		printf("2. Insertar\n");
		printf("3. Borrar\n");
		printf("4. Actualizar\n");
		printf("5. Mostrar todos\n");
		printf("6. Salir\n");
		printf("Ingrese opcion: ");
		scanf("%d", &opcion);

		switch(opcion)
		{
			case 1:
			break;
			case 2:
				printf("Ingrese nombre: ");
				scanf("%s", name);
				printf("Ingrese apellido: ");
				scanf("%s", last_name);
				printf("Ingrese telefono: ");
				scanf("%s", phone_number);
				strcpy(sqlquery, "INSERT INTO user(name, last_name,"
								" phone_number) VALUES (\'");
				strcat(sqlquery, name);
				strcat(sqlquery, "\', \'");
				strcat(sqlquery, last_name);
				strcat(sqlquery, "\', \'");
				strcat(sqlquery, phone_number);
				strcat(sqlquery, "\')");

				if (mysql_query(conn, sqlquery) != 0)
				{
					fprintf(stderr, "Row could not be inserted into"
									" users tables\n");
					break;
				}
				strcat(sqlquery, "\', \'");
			break;
			case 3:
			break;
			case 4:
			break;
			case 5:
				strcpy(sqlquery, "SELECT * FROM users");

				resultset = mysql_store_result(conn);

				if (mysql_query(conn, sqlquery) != 0)
				{
					fprintf(stderr, "No found users\n");
					break;
				}

				while ((row = mysql_fetch_row(resultset)) != NULL)
				{
					printf("Nombre: %s ", row[0]);
					printf("Apellido: %s ", row[1]);
					printf("Telefono: %s\n", row[2]);
				}
				mysql_free_result(resultset);
			break;
			case 6:
				mysql_close(conn);
				exit(0);
			break;
			default:
				printf("************************\n");
				fprintf(stderr, "Error: Opcion no valida.\n");
				printf("************************\n");
		}
	}

	return (0);
}
