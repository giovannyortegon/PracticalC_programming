#include<stdio.h>
#include<stdlib.h>
#include<strings.h>
#include<unistd.h>
#include<sys/types.h>
#include<arpa/inet.h>
#include<sys/socket.h>
#include<netinet/in.h>

#define MAX 255

int main()
{
	char msgReceived[MAX];
	char msgforClient[MAX];
	int UDPSocket, len, ret, n;
	struct sockaddr_in server_Address, client_Address;

	bzero(&server_Address, sizeof(server_Address));

	printf("Waiting for the message from the client\n");

	UDPSocket = socket(AF_INET, SOCK_DGRAM, 0);
	if (UDPSocket < 0)
	{
		perror("Socket could not be created");
		exit(-1);
	}

	server_Address.sin_addr.s_addr = htonl(INADDR_ANY);
	server_Address.sin_port = htons(2000);
	server_Address.sin_family = AF_INET;

	ret = bind(UDPSocket, (const struct sockaddr *)&server_Address,
						   sizeof(server_Address));
	if (ret < 0)
	{
		perror("Binding could not be done.");
		exit(-1);
	}

	len = sizeof(client_Address);
	n = recvfrom(UDPSocket, msgReceived, sizeof(msgReceived), 0,
				 (struct sockaddr *)&client_Address, &len);
	msgReceived[n] = '\0';

	printf("Message received from the client: ");
	puts(msgReceived);

	printf("Enter the reply to be sent to the client: ");
	gets(msgforClient);
	sendto(UDPSocket, msgforClient, 255, 0, (struct sockaddr *)&client_Address,			  sizeof(client_Address));

	printf("Reply to the client sent\n");

	return (0);
}
