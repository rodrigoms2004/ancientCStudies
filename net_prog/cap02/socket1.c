#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h>

const char APRESSMESSAGE[] = "APRESS - For Professionals, by Professionals!\n";

int main(int argc, char *argv[]) {
	int simpleSocket = 0;
	int simplePort = 0;

	/* make sure we have a port number */
	if (2 != argc) {
		fprintf(stderr, "Usage: %s <port>\n", argv[0]);
		exit(1);
	}

	/* create a treaming socket */
	simpleSocket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);

	if (simpleSocket == -1) {
		fprintf(stderr, "Could not create a socket!\n");
		exit(1);
	}
	else {
		fprintf(stderr, "Socket created!\n");
	}
	return 0;
}	// end main
