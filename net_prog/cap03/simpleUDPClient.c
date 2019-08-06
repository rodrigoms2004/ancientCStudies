#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h>
#include <string.h>
#include <stdio.h>

/* size of message buffers */
#define MAXBUF 1024

int main(int argc, char* argv[])
{
	int udpSocket;
	int returnStatus = 0;
	int addrlen = 0;
	struct sockaddr_in udpServer, udpClient;
	char buf[MAXBUF];

	/* check for the right number of arguments */
	if (argc < 3)
	{
		fprintf(stderr, "Usage: %s <ip address> <port>\n", argv[0]);
		exit(1);
	}

	/* create a socket */
	udpSocket = socket(AF_INET, SOCK_DGRAM, 0);
	
	if (udpSocket == -1)
	{
		fprintf(stderr, "Could not create a socket!\n");
		exit(1);
	}
	else {
		printf("Socket created.\n");
	}


	/* cliente address */
	/* use INADDR_ANY to use local addresses */
	udpClient.sin_family = AF_INET;
	udpClient.sin_addr.s_addr = INADDR_ANY;
	udpClient.sin_port = 0;	
		
	/* bind to the socket */
	returnStatus = bind(udpSocket, (struct sockaddr*)&udpClient,
						sizeof(udpClient));
	if (returnStatus == 0) {
		fprintf(stderr, "Bind completed!\n");
	}
	else {
		fprintf(stderr, "Could not bind to address!\n");
		close(udpSocket);
		exit(1);
	}

	/* set up the message to be sent to the server */
	strcpy(buf, "For Professionals, By Professionals.\n");

	/* server address */
	/* use the command-line arguments */
	udpServer.sin_family = AF_INET;
	udpServer.sin_addr.s_addr = inet_addr(argv[1]);
	udpServer.sin_port = htons(atoi(argv[2]));

	returnStatus = sendto(udpSocket, buf, strlen(buf)+1, 0, 
						  (struct sockaddr*)&udpServer, sizeof(udpServer));

	if (returnStatus == -1) {
		fprintf(stderr, "Could not send message!\n");
	}
	else {
		printf("Message sent.\n");

		/* message sent: look for confirmation */
		addrlen = sizeof(udpServer);

		returnStatus = recvfrom(udpSocket, buf, MAXBUF, 0,
								(struct sockaddr*)&udpServer, &addrlen);
		if (returnStatus == -1) {
			fprintf(stderr, "Did not receive confirmation!\n");
		}
		else {
			buf[returnStatus] = 0;
			printf("Received: %s\n", buf);
		}
	}

	/* cleanup */
	close(udpSocket);
	return 0;

}	// end main
