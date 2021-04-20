#include<stdio.h>
#include<strings.h>
#include<sys/types.h>
#include<arpa/inet.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<unistd.h>
#include<stdlib.h>

#define MAX 255

int main()
{
	char msgReceived[MAX];
	char msgforServer[MAX];
	int UDPSocket, n;
	struct sockaddr_in client_Address;

	printf("Enter the message to send to the server: ");
	gets(msgforServer);

	bzero(&client_Address, sizeof(client_Address));

	client_Address.sin_addr.s_addr = inet_addr("127.0.0.1");
	client_Address.sin_port = htons(2000);
	client_Address.sin_family = AF_INET;

	UDPSocket = socket(AF_INET, SOCK_DGRAM, 0);

	if (UDPSocket < 0)
	{
		perror("Socket could not be created");
		exit(-1);
	}

	if (connect (UDPSocket, (struct sockaddr *)&client_Address,
				 sizeof(client_Address)) < 0)
	{
		printf("\nError: Connected Failed\n");
		exit(0);
	}

	sendto(UDPSocket, msgforServer, 255, 0, (struct sockaddr *)NULL,
		   sizeof(client_Address));
	printf("Message to the server sent.\n");

	recvfrom(UDPSocket, msgReceived, sizeof(msgReceived), 0,
			(struct sockaddr *)NULL, NULL);
	printf("Received from the server: ");
	puts(msgReceived);

	close(UDPSocket);
}
